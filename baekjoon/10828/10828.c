#include<stdio.h>
#include<string.h>
#define TRUE 1;
#define FALSE 0;
#define MINUS -1;
#define MAX_SIZE 10000;
typedef struct _stack{
    int arr[MAX_SIZE];    
    int top;} Stack; 
void StackInit(Stack * sp){   
    sp->top = -1;
    } 
int IsEmpty(Stack * sp){
    if(sp->top == -1) return TRUE;            
    return FALSE;
    } 
int Size(Stack *sp){     
    return sp->top + 1;
}  
int IsFull(Stack * sp){  
    if(sp->top + 1 >= MAX_SIZE) {
        return TRUE;
    }     
    else{
    return FALSE;
    }
} 
void Push(Stack * sp, int data){     
    if(IsFull(sp)==TRUE) {return; 
    sp->arr[++(sp->top)] = data;    
} 
int Pop(Stack * sp){      
    if(IsEmpty(sp) == TRUE) return MINUS;    
    return sp->arr[(sp->top)--];
    } 
int Peek(Stack *sp){        
    if(IsEmpty(sp) == TRUE) return MINUS;       
     return sp->arr[sp->top];
    }  
int main(){      
    char str[6];   
    Stack stack;    
    int n, num;        
    scanf("%d", &n);   
     fgetc(stdin);    
    StackInit(&stack);     
    for(int i=0; i<n; i++){           
         scanf("%s", str);       
         fgetc(stdin);    
    }
    if(!strcmp(str, "push")){
        scanf("%d", &num);            
        fgetc(stdin);               
        Push(&stack, num); 
    }                       
    else if(!strcmp(str, "pop")){               
        printf("%d\n", Pop(&stack));                
    }
    else if(!strcmp(str, "empty")){
        printf("%d\n", IsEmpty(&stack));                    
    }
    else if(!strcmp(str, "size")){                           
        printf("%d\n", Size(&stack));                
    }
    else if(!strcmp(str, "top")){        
        printf("%d\n", Peek(&stack));                
    }          
    return 0;    
}
