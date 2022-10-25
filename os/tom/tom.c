#include <stdio.h>
#include <stdlib.h>
#include <sys.wait.h>
#include <sring.h>
#include <fstream>
#include <iostream>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <signal.h>
using namespace std;
pid_t c_pid, p_pid;

void waitHandler(int sig){
	wait(NULL);
	cout<<"Parent end"<<endl;
	exit(0);
}
void intHandler(int sig){
	if(c_pid == getpid()) {
		sleep(2);
		return;
	}
	cout<<"Child end"<<endl;
	exit(0);
}

int main() {
	char parent[80], child[80];
	int i, n;
	int fdw, fdr;
	char* chatTtoJ = "./chatTtoJ"; // FIFO의 이름 경로명
	char* chatJtoT = "./chatTtoT"; // FIFO의 이름 경로명

	mkfifo(chatTtoJ, 0666); // ./chatTtoJ 이름의 FIFO 생성
	mkfifo(chatJtoT, 0666); // ./chatTtoT 이름의 FIFO 생성
	
	ofstream out(chatJtoT);
	ifstream in(chatJtoT);

	signal(SIGCHILD,waitHandler);
	signal(SIGINT,intHandler);

	pid_t pid = fork();

	if(pid>0){
		printf("부모프로세스 : 자식 PID=%d\n",pid);
		c_pid = pid;
		p_pid = getpid();
		printf("부모프로세스 PID=%d : 자식 PID=%d\n",p_pid,c_pid);

		while((1){
			in>>other;
			cout << other<<endl;
			sleep(1);
		}
	}
	else if(pid ==0){
		c_pid = getpid();
		p_pid = getppid();
		
		printf("자식프로세스 PID=%d: 부모 PID=%d 종료합니다.\n",c_pid,p_pid);
		while(1){
			cin>>user;
			out<<user<<endl;
	}
	else{
		printf("fork 오류");
		return 0;
	}
	in.close();
	out.close();
	return 0;
}