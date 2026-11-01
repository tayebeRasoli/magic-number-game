
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    string playerName;

    cout << "============================\n";
    cout << "      MAGIC NUMBER GAME\n";
    cout << "============================\n";

    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << "\nWelcome " << playerName << "!\n";
    cout << "I selected a number between 1 and 100.\n";
    cout << "Can you guess it?\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try a smaller number.\n";
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try a bigger number.\n";
        }
        else {
            cout << "\nCongratulations, " << playerName << "!\n";
            cout << "You found the magic number!\n";
            cout << "Attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    cout << "\nThanks for playing!\n";

    return 0;
}

