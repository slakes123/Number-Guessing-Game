// NumGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
    int range;
    cout << "Pick a number for the range (e.g. 1-X)\n";
    cin >> range;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int number = rand() % range + 1;

    int guess = 0; 

    while (guess != number) {
        cout << "Guess a number\n";
        cin >> guess;

        if (guess == number) {
            cout << "Congradulations! You Win!\n";
            return 0;
        }
        else if (guess > range) {
            cout << "That is nto within range. The range is " << range << " ! \n";
        }
        else if (guess > number) {
            cout << "The number is lower\n";
        }
        else if (guess < number) {
            cout << "The number is higher\n";
        }
        
    }
}
