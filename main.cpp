// ASSIGNMENT NAME: Lab 2.2
// PROGRAMMER NAME: Matthew Davenport
// DATE: 9/6/20
#include <iostream>
#include <ctime>

using namespace std;

int main() {

srand(time(nullptr));

// Counters
int wins(0);
int losses(0);
int draws(0);

// Keep Playing Condition
  bool keepPlaying(true);
  while (keepPlaying) {
    // Player's turn
    char playerChoice;
    cout<<"Enter an 'R' for Rock, 'S' for scissors, or 'P' for Paper"<<endl;
    cin>>playerChoice;
    cout<<"You chose "<<playerChoice<<endl;

    // Computer's turn
    char computerChoice; 
    int compInt = rand() % 3 + 1;
      // Convert int to char
      if (compInt == 1){
        computerChoice = 'R';
      } else if (compInt == 2){
        computerChoice = 'S';
      } else if (compInt == 3) {
        computerChoice = 'P';
      }
    cout<<"The Computer chose "<<computerChoice<<endl;

    // Compare choices
    if (playerChoice == 'R' && computerChoice == 'S'){
      cout<<"You Win!"<<endl;
      wins++;
    } else if (playerChoice == 'S' && computerChoice == 'P'){
      cout<<"You Win!"<<endl;
      wins++;
    } else if (playerChoice == 'P' && computerChoice == 'R') {
      cout<<"You Win!"<<endl;
      wins++;
    } else if (playerChoice == 'R' && computerChoice == 'P') {
      cout<<"You Lose!"<<endl;
      losses++;
    } else if (playerChoice == 'P' && computerChoice == 'S') {
      cout<<"You Lose!"<<endl;
      losses++;
    } else if (playerChoice == 'S' && computerChoice == 'R') {
      cout<<"You Lose!"<<endl;
      losses++;
    } else if (playerChoice == computerChoice){
      cout<<"Draw!"<<endl;
      draws++;
    }

    // Ask for replay
    char answer;
    cout<<"Play Again?(y/n)"<<endl;
    cin>>answer;
    if (toupper(answer) == 'N'){
      keepPlaying = false;
    }
  }
  // Display counters results
  cout<<"Wins: "<<wins<<endl;
  cout<<"Losses: "<<losses<<endl;
  cout<<"Draws: "<<draws<<endl;

  return 0;
}