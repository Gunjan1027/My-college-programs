#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getChoiceName(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
    
}

int main() {
    int userChoice, computerChoice;

    
    srand(time(0));

    cout << "Rock, Paper, Scissors Game!\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please run the program again.\n";
        return 0;
    }

    computerChoice = rand() % 3 + 1;

    cout << "You chose: " << getChoiceName(userChoice) << endl;
    cout << "Computer chose: " << getChoiceName(computerChoice) << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}