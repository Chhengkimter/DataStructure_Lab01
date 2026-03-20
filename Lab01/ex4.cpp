#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int userChoice;
    int win = 0;
    int lose = 0;

    cout << "Rock Paper Scissors Game!" << endl;
    srand(time(0));   
    do {
        cout << "Enter your choice \n1: rock \n2: paper \n3: scissors" << endl;
        cin >> userChoice;
        
        int computerChoice = rand() % 3 + 1;
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 1 && computerChoice == 3) || 
                   (userChoice == 2 && computerChoice == 1) || 
                   (userChoice == 3 && computerChoice == 2)) {
            if (lose > 0) {
                lose--;
                cout << "You won! Score: " << win << " - " << lose << endl;
            } else {
                win++;
                cout << "You won! Score: " << win << " - " << lose << endl;
            }
        } else {
            if (win > 0) {
                win--;
                cout << "You lost! Score: " << win << " - " << lose << endl;
            } else {
                lose++;
                cout << "You lost! Score: " << win << " - " << lose << endl;
            }
        }
    } while (win < 3 && lose < 3);

    cout << "\n===========================" << endl;
    if (win == 3) {
        cout << "You won the match! Congratulations!" << endl;
    } else {
        cout << "Computer won the match. Better luck next time!" << endl;
    }
    cout << "Final score: You " << win << " - " << lose << " Computer" << endl;  

    return 0;
}