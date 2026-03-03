#include<iostream>
#include<ctime>

using namespace std;

int main(){

    int num, guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100)+1;

    cout<<"************* Number Guess Game *************";

    do
    {
        cout<<"\n Enter a number between (1 - 100) : ";
        cin>>guess;
        tries++;

        if (guess > num){
            cout<<"too high !\n";
        }
        else if (guess < num){
            cout<<"too low ! \n";
        }
        else{
            cout << "Correct guess after tries : "<< tries <<endl;
        }
    } while (guess != num);
    
    cout<<"*********************************************";
}