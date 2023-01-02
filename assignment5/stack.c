#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10

int toCount = 0;

struct stack{

    int data[MAXOFSTACK];

    int top;
};

typedef struct stack st;

int isStackIsFull(st *myStack){
    if(myStack->top == MAXOFSTACK -1){
        return 1;
    }else{
        return 0;
    }
}

void create_emptyStack(st *myStack){
    myStack->top = -1;
}

void pushtoStack(st *myStack,int value){

    if(isStackIsFull(myStack)){
        printf("stack is full");
    }else{
        // printf("Enter one number to add : ");
        // scanf("%d",&value);

        myStack->top++;

        myStack->data[myStack->top] = value;

    }

}

void showFromStack(st *myStack){
    if(myStack->top == -1){
        printf("stack is empty");
    }else{
        myStack->top--;

        for(int i = myStack->top+1; i>=0;--i){

            toCount++;

            // if(toCount == 1){
            //     printf("number from \' %d \' st place : %d \n",toCount,myStack->data[i]);
            // }else if(toCount == 2){
            //     printf("number from \' %d \' nd place : %d \n",toCount,myStack->data[i]);
            // }else if(toCount == 3){
            //     printf("number from \' %d \' rd place : %d \n",toCount,myStack->data[i]);
            // }else{
            //     printf("number from \' %d \' st place : %d \n",toCount,myStack->data[i]);
            // }

            switch (toCount){
            case 1:
                printf("number from \' %d \' st place : %d \n",toCount,myStack->data[i]);
                break;
            case 2:
                printf("number from \' %d \' nd place : %d \n",toCount,myStack->data[i]);
                break;
            case 3:
                printf("number from \' %d \' rd place : %d \n",toCount,myStack->data[i]);
                break;
            
            default:
                printf("number from \' %d \' th place : %d \n",toCount,myStack->data[i]);
                break;
            }

        }
    }
}

int main(){

    st *myStack =(st*)malloc(sizeof(st));

    create_emptyStack(myStack);

    pushtoStack(myStack,10);
    pushtoStack(myStack,11);
    pushtoStack(myStack,12);
    pushtoStack(myStack,13);
    pushtoStack(myStack,14);
    pushtoStack(myStack,15);
    pushtoStack(myStack,16);
    
    showFromStack(myStack);
    
    return 0;
}