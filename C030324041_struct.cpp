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
    
}
