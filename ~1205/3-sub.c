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

int main(void){
    char read[10];
    int l=0;
    int r=0;
    while(scanf("%s ", read)== 1){
        if(read[0] == '+') push(pop()+pop());
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
    }
    printf("%d\n", pop());
    return 0;
}
