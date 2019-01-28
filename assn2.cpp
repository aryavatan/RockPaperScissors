//
//  assn2.cpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#include <iostream>
#include "Human.hpp"
#include "Computer.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Player Name: ";
    string name;
    cin >> name;
    
    Human player(name);
    Computer computer;
    Guess pGuess, cGuess;
    
    //While neither player has won yet
    while(player.getScore() > 0 && computer.getScore() > 0){
        pGuess = player.getGuess();
        cGuess = computer.getGuess();
        cout << "\nHuman: " << pGuess.getGuess() << " - Computer: " << cGuess.getGuess() << endl;
        switch(pGuess.compare(cGuess)){
            case -1: //Player won
                --player;
                break;
            case 1: //Computer won
                --computer;
                break;
        }
        cout << "Human: " << player.getScore() << " - Computer: " << computer.getScore() << endl;
    }
    
    if(player.getScore() == 0){
        cout << player.getName() << " WON!!!";
    }
    else{
        cout << "The Computer WON!!!";
    }
    
}
