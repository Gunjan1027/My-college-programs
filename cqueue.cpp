#include<iostream>
using namespace std;

class circularQueue {
    public:
    int arr[6];
    int front = -1;
    int rear = -1;

    bool isFull() {
        return (front == 0 && rear == 5) || (rear + 1 == front);
    }
    bool isEmpty() {
        return front == -1;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow(full)" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % 6;
        arr[rear] = value;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow(empty)" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % 6;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % 6;
        }
        cout << endl;
    }
    void deleteQueue() {
        front = -1;
        rear = -1;
    }

};

int main() {
    cout << "..........................................................." << endl;
    cout << "..................Circular Queue Operations................" << endl;
    cout << "..........................................................." << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Display" << endl;
    cout << "4. Delete Queue" << endl;
    cout << "5. Exit" << endl;
    cout << "..........................................................." << endl;
    circularQueue cq;
    int choice, value;
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                cq.enqueue(value);
                break;
            case 2:
                cq.dequeue();
                break;
            case 3:
                cq.display();
                break;
            case 4:
                cq.deleteQueue();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
    return 0;
}