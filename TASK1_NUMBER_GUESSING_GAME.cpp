#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0)); // the random number generator with current time

    int randomNumber =rand()%100 +1; //Generates a number between 1 and 100
    int userGuess;
    int numberOfGuesses = 0;

    cout<< "Welcome to the Guessing Game!"<<endl;
    cout<<"I have chosen a number between 1 and 100. Try to guess it."<<endl;

    do{
        cout<<"Enter your guess: ";
        cin>>userGuess;
        numberOfGuesses++;

        if(userGuess< randomNumber){
            cout<<"Too low! Try again."<<endl;
        }else if(userGuess>randomNumber){
            cout<<"Too high! Try again"<<endl;
        }else{
            cout<<"Congratulations! You guessed the number "<<randomNumber<<" in "<<numberOfGuesses<<" guesses."<<endl;
        }
    }
    while(userGuess!=randomNumber);

    return 0;
}