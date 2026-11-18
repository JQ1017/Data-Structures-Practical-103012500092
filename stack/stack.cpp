#include "Stack.h"

void createStack(Stack &S) {
    S.top = -1;
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == 4;
}

void push(Stack &S, infotype x) {
    if (isFull(S)) {
        cout << "Error: Stack Overflow! Cannot insert " << x << endl;
    } else {
        S.top++;
        S.arr[S.top] = x;
        cout << x << " inserted successfully." << endl;
    }
}

void pop(Stack &S) {
    if (isEmpty(S)) {
        cout << "Error: Stack Underflow! Stack is empty." << endl;
    } else {
        cout << S.arr[S.top] << " popped successfully." << endl;
        S.top--;
    }
}

int peek(Stack S) {
    if (isEmpty(S)) {
        cout << "Error: Stack is empty." << endl;
        return -1;
    }
    return S.arr[S.top];
}

void display(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements (top to bottom): ";
        for (int i = S.top; i >= 0; i--) {
            cout << S.arr[i] << " ";
        }
        cout << endl;
    }
}

void createCharStack(CharStack &S) {
    S.top = -1;
}

bool isCharStackEmpty(CharStack S) {
    return S.top == -1;
}

bool isCharStackFull(CharStack S) {
    return S.top == 99;
}

void pushChar(CharStack &S, char c) {
    if (isCharStackFull(S)) {
        cout << "Error: Stack Overflow!" << endl;
    } else {
        S.top++;
        S.arr[S.top] = c;
    }
}

char popChar(CharStack &S) {
    if (isCharStackEmpty(S)) {
        cout << "Error: Stack Underflow!" << endl;
        return '\0';
    } else {
        char c = S.arr[S.top];
        S.top--;
        return c;
    }
}
