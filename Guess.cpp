//
//  Guess.cpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#include "Guess.hpp"

Guess::Guess(){
    //Only possible values for 'num' are 0,1,2
    int num = rand() % 3;
    switch(num){
        case 0:
            guess = 'R';
            break;
        case 1:
            guess = 'P';
            break;
        case 2:
            guess = 'S';
            break;
    }
}

Guess::Guess(char guess){
    //Used the || operator to account for both upper and lower case inputs
    if(guess == 'r' || guess == 'R')
        this->guess = 'R';
    else if(guess == 'p' || guess == 'P')
        this->guess = 'P';
    else
        this->guess = 'S';
}

Guess::Guess(int guess){
    switch(guess){
        case 0:
            this->guess = 'R';
            break;
        case 1:
            this->guess = 'P';
            break;
        default:
            this->guess = 'S';
            break;
    }
}

int Guess::compare(const Guess &other) const{
    //If its the same guess, its a draw
    //If this player didn't lose, they won
    //Else other player won
    if(this->guess == other.guess){
        return 0;
    }
    else if(this->guess == 'R' && other.guess != 'P'){
        return -1;
    }
    else if(this->guess == 'P' && other.guess != 'S'){
        return -1;
    }
    else if(this->guess == 'S' && other.guess != 'R'){
        return -1;
    }
    else{
        return 1;
    }
}
