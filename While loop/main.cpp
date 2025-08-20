#include<iostream>
using namespace std;

int main(){
    int guess=0, secretNum=7,guessCount=0,guessLimit=3,outOfGuesses=false;

    while(secretNum!=guess && !outOfGuesses){
            if(guessCount < guessLimit){
                cout<<"Enter number to guess: ";
                cin>>guess;
                guessCount++;
            }else{
                outOfGuesses = true;
            }
    }

    if(outOfGuesses){
        cout<<"Loss";
    }else{
        cout<<"win";
    }
}
