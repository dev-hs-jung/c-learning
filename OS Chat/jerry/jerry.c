#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void (*ctrl_c)(int);

void sigint_exit(int signo)
{
	signal(SIGINT, ctrl_c);
}

int main() {
	char parent[80], child[80];
	int i, n;
	int fdw, fdr;
	ctrl_c = signal(SIGINT, sigint_exit);
	char* chatTtoJ = "./chatTtoJ"; // FIFO의 이름 경로명
	char* chatJtoT = "./chatTtoT"; // FIFO의 이름 경로명

	mkfifo(chatTtoJ, 0666); // ./chatTtoJ 이름의 FIFO 생성
	mkfifo(chatJtoT, 0666); // ./chatTtoT 이름의 FIFO 생성

	fdr = open(chatTtoJ, O_RDONLY); // chatTtoJ를 읽기 모드로 열기
	fdw = open(chatJtoT, O_WRONLY); // chatTtoT를 쓰기 모드로 열기

	while (1) {
		i = 0;
		while ((n = read(fdr, &child[i], 1)) > 0) {
			if (child[i] == '\0') break;
			if (i == 78) {
				child[++i] = '\0';
				break; // 널을저장할 공간만 남기고 리턴
			}
			i++;
		}
		if (n <= 0) {
			printf("상대가 종료하였습니다.\n");
			break;
		}
		printf("child: %s\n", child);
		if (signal(SIGINT, sigint_exit)) {
			printf("break 합니다\n");
			break; // 루프 종료
		}
		printf(">>>");
		fgets(parent, 80, stdin);
		write(fdw, parent, strlen(parent) + 1);
		if (strcmp(parent, "exit\n") == 0) {
			printf("break 합니다\n");
			break;
		}
	}
	close(fdw);
	close(fdr);
	return 0;
}