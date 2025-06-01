#include <iostream>
#include <conio.h>
using namespace std;

typedef int itemType;

const int MAXSTACK = 15;

typedef struct stack{
    itemType Item[MAXSTACK];
    int Counts;
} Stack;

void InitStack(Stack *S);
int Full(Stack *S);
int Empty(Stack *S);
void Pop(Stack *S, itemType *z);
void Push(Stack *S, itemType z);
void display(Stack *S);

int main(int argc, char const *argv[]){
    Stack S;
    itemType z;

    InitStack(&S);
    
    Push(&S, 2);
    Push(&S, 1);
    Push(&S, 9);
    Push(&S, 4);
    Push(&S, 7);
    Pop(&S, &z);
    display(&S);

    return 0;
}
