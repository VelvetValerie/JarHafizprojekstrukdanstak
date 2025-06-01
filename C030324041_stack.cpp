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

void InitStack(Stack *S) {
    S->Counts = 0;
}

int Full(Stack *S) {
    return (S->Counts == MAXSTACK);
}

int Empty(Stack *S) {
    return (S->Counts == 0);
}

void Pop(Stack *S, itemType *z) {
    if (S->Counts == 0)
    {
        cout << "Stack masih kosong" << endl;
    } else {
        --(S->Counts);
        *z = S->Item[S->Counts];
    }
    
}

void Push(Stack *S, itemType z) {
    if (S->Counts == MAXSTACK) {
        cout << "Stack sudah penuh" << endl;
    } else {
        S->Item[S->Counts] = z;
        ++(S->Counts);
    }
}

void display(Stack *S) {
    cout << "Menampilkan data stack" << endl;

    for (int i = (S->Counts) - 1; i >= 0; --i)
    {
        cout << S->Item[i] << endl;
    }
    
}