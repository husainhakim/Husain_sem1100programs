// This program allows users to play a rock paper scissor game with the computer without graphical interface

#include "iostream"
#include <cstdlib>
#include <ctime>
using namespace std;

int winCheck(int computerPlay, int playerPlay) {
    if(playerPlay == 0) {// player chose rock
            if(computerPlay ==0) { // computer chose rock
                return 0;
            }
            else if(computerPlay == 1) { //computer chose paper
                return 1;
            }
            else { //computer chose scizzor
                return 2;
            }
        } 
        else if(playerPlay == 1) {// player chose paper
            if(computerPlay ==0) { // computer chose rock 
                return 2;

            }
            else if(computerPlay == 1) { //computer chose paper
                return 0;
            }
            else { //computer chose scizzor
                return 1;
            }
        } 
        else { // player chose scizzor
            if(computerPlay ==0) { // computer chose rock
                return 1;
            }
            else if(computerPlay == 1) { //computer chose paper
                return 2;
            }
            else { //computer chose scizzor
                return 0;
            }
        }//0 represents draw, 1 represents computer wins and 2 represent player win.
}

int getRandom() {
    srand(static_cast<unsigned int>(time(nullptr)));
    return (rand() % 3); 
}//returns random number between 0 and 2, inclusive.

int getPlay() {
    int ch;
    cout << "Enter 0 for rock, 1 for paper and 2 for scizzor: ";
    cin >> ch;
    return ch;
}//takes user's play

void BestOfWinner(int playerWins, int computerWins) {
    if(playerWins == computerWins) {
        cout << "None" << endl;
    }
    else if(playerWins > computerWins) {
        cout << "Player" << endl;
    }
    else {
        cout << "Computer" << endl;
    }
}


int main()
{
    int rounds, choice, computerChoice;
    int playerWins=0, computerWins=0;
    int winner;
    cout << "Enter number of rounds you wish to play (Enter '1' for only one round, '3' for a best of three and '5' for a best of five): ";
    cin >> rounds;
    string vals[] = {"rock", "paper", "scissor"};
    switch (rounds)
    {
    case 1:
        // only one round will be played:
        computerChoice=getRandom();
        choice=getPlay();
        while(choice < 0 || choice >2){
            cout <<"Please enter 0 1 or 2 ONLY.\n";
            // cin >> choice;
            choice=getPlay();
        }
        cout << "Computer's play: " << vals[computerChoice] << "\t Your play: " << vals[choice] <<endl;
        winner = winCheck(computerChoice, choice);
        if(winner == 0) {
            cout << "Draw." << endl;
        }
        else if(winner == 1) {
            cout << "Computer wins." << endl;
        }
        else {
            cout << "You win." << endl;
        }
        break;

    case 3: //best of 3:
        for(int i=0; i<3; i++) {
            choice=getPlay();
            while(choice < 0 || choice >2){
            cout <<"Please enter 0 1 or 2 ONLY.\n";
            choice=getPlay();
            }
            computerChoice = getRandom();
            cout << "Computer's play: " << vals[computerChoice] << "\t Your play: " << vals[choice] <<endl;
            int win=winCheck(computerChoice, choice);
            if(win==1) {
                cout << "Computer wins round "<< i+1 << endl;
                computerWins++;
            }
            else if(win==2) {
                cout << "Player wins round "<< i+1 << endl;
                playerWins++;
            }
            else {
                cout << "Round draw..." << endl;
            }
        }

        cout<<"The winner of the best of 3  is: ";
        BestOfWinner(playerWins, computerWins);
        break;

    case 5: //best of 5:
        for(int i=0; i<5; i++) {
            choice=getPlay();
            while(choice < 0 || choice >2){
                cout <<"Please enter 0 1 or 2 ONLY.\n";
                choice=getPlay();
            }
            computerChoice = getRandom();
            cout << "Computer's play: " << vals[computerChoice] << "\t Your play: " << vals[choice] <<endl;
            int win=winCheck(computerChoice, choice);
            if(win==1) {
                cout << "Computer wins round "<< i+1 << endl;
                computerWins++;
            }
            else if(win==2) {
                cout << "Player wins round "<< i+1 << endl;
                playerWins++;
            }
            else {
                cout << "Round draw..." << endl;
            }
        }
        cout<<"The winner of the best of 3  is: ";
        BestOfWinner(playerWins, computerWins);

        break;

        default:
            cout << "Invalide game type chosen!" << endl;
    }

    return 0;
}