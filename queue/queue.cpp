#include "queue.h"

void createQueue(CircularQueue &Q) {
    Q.frontIdx = 0;
    Q.rearIdx = -1;
    Q.count = 0;
}

bool isEmpty(CircularQueue Q) {
    return Q.count == 0;
}

bool isFull(CircularQueue Q) {
    return Q.count == 5;
}

void enqueue(CircularQueue &Q, infotype x) {
    if (isFull(Q)) {
        cout << "Error: Queue Overflow!" << endl;
    } else {
        Q.rearIdx = (Q.rearIdx + 1) % 5;
        Q.arr[Q.rearIdx] = x;
        Q.count++;
    }
}

void dequeue(CircularQueue &Q) {
    if (isEmpty(Q)) {
        cout << "Error: Queue Underflow!" << endl;
    } else {
        cout << Q.arr[Q.frontIdx] << " removed successfully." << endl;
        Q.frontIdx = (Q.frontIdx + 1) % 5;
        Q.count--;
    }
}

void display(CircularQueue Q) {
    if (isEmpty(Q)) {
        cout << "Queue: empty" << endl;
    } else {
        cout << "Queue: ";
        for (int i = 0; i < Q.count; i++) {
            int idx = (Q.frontIdx + i) % 5;
            cout << Q.arr[idx] << " ";
        }
        cout << endl;
    }
}
