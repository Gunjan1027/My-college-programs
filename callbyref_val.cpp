#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;
    cout << "Inside callByValue function, x = " << x << endl;
}

void callByReference(int &x) {
    x = x + 10;
    cout << "Inside callByReference function, x = " << x << endl;
}


int main() {
    int a = 5;
    callByValue(a);
    cout << "After callByValue, a = " << a << endl;

    callByReference(a);
    cout << "After callByReference, a = " << a << endl;

    return 0;
}
