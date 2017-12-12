#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int STACK[1000];
int POINT = 0;

void push(int i){
    STACK[POINT] = i;
    POINT++;
}

int pop(void){
    POINT--;
    return STACK[POINT];
}

void printStack(void){
    for(int i = 0; i < POINT; i++){
        if(i!=0) printf(" ");
        printf("%d", STACK[i]);
    }
    printf("\n");
}

void stackInit(void){
    POINT = 0;
    for(int i = 0; i < 1000; i++)STACK[i] = 0;
}

int main(void){
    char read[10];
    int l=0;
    int r=0;
    stackInit();
    while(scanf("%s ", read)== 1){
        if(read[0] == '=') break;
        else if(read[0] == '+') push(pop()+pop());
        else if(read[0] == '-'){
            r = pop();
            l = pop();
            push(l-r);
        }
        else if(read[0] == '*') push(pop()*pop());
        else if(read[0] == '/'){
            r = pop();
            l = pop();
            push(l/r);
        }
        else{
            push(atoi(read));
        }
        printStack();
    }
    return 0;
}
