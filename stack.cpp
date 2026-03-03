#include<iostream>
using namespace std;
class stack{
    public:
    
    int arr[6];
    int top = -1;
    void push(int value){
        if(top == 5){
            cout << "Stack Overflow(full)" << endl;
            return;
        }
        arr[++top] = value;
    }
    void pop(){
        if(top == -1){
            cout << "Stack Underflow(empty)" << endl;
            return;
        }
        top--;
    }
    void display(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return;
        }
        for(int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteStack(){
        top = -1;
    }
    int peek(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main(){
    cout << "..........................................................."<< endl;
    cout << "......................Stack Operations....................." << endl;
    cout << "..........................................................."<< endl;
    cout <<"1. Push"<< endl;
    cout <<"2. Pop"<< endl;
    cout <<"3. Display"<< endl;
    cout <<"4. Peek"<< endl;
    cout <<"5. Delete Stack"<< endl;
    cout <<"6. Exit"<< endl;
    cout << "..........................................................."<< endl;
    stack s;
    int choice, value;
    while(true){
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Top element is: " << s.peek() << endl;
                break;
            case 5:
                s.deleteStack();
                cout << "Stack deleted" << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    
    }
    cout << endl;
    return 0;
}
    
    
