#include <iostream>
#include <string>
using namespace std;


struct Node {
    string task;
    Node* prev;
    Node* next;
    Node(string t) : task(t), prev(nullptr), next(nullptr) {}
};

class TodoList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    TodoList() : head(nullptr), tail(nullptr), size(0) {}

   
    void addTask(string task) {
        Node* newNode = new Node(task);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
        cout << "Task added successfully!\n";
    }

    
    void removeTask(int index) {
        if (index < 1 || index > size) {
            cout << "Invalid index!\n";
            return;
        }

        Node* current = head;
        for (int i = 1; i < index; i++) {
            current = current->next;
        }

        if (current == head) {
            head = head->next;
            if (head) head->prev = nullptr;
        } else if (current == tail) {
            tail = tail->prev;
            tail->next = nullptr;
        } else {
            current->prev->next = current->next;
            current->next->prev = current->prev;
        }

        delete current;
        size--;
        cout << "Task removed successfully!\n";
    }

    void displayTasks() {
        if (size == 0) {
            cout << "No tasks in the list!\n";
            return;
        }

        Node* current = head;
        int index = 1;
        cout << "\n===== TODO LIST =====\n";
        while (current) {
            cout << index++ << ". " << current->task << endl;
            current = current->next;
        }
        cout << "===================\n";
    }

    ~TodoList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    TodoList todoList;
    int choice;
    string task;

    while (true) {
        cout << "\n1. Add Task\n"
             << "2. Remove Task\n"
             << "3. Display Tasks\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                cin.ignore();
                getline(cin, task);
                todoList.addTask(task);
                break;

            case 2:
                int index;
                cout << "Enter task number to remove: ";
                cin >> index;
                todoList.removeTask(index);
                break;

            case 3:
                todoList.displayTasks();
                break;

            case 4:
                cout << "Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}