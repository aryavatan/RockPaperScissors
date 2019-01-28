//
//  Human.cpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#include "Human.hpp"
#include <iostream>

//Explicitly pass a initial score of 3 for Human player
Human::Human(std::string name) : Player(3){
    this->name = name;
}

Guess Human::getGuess() const{
    std::cout << "Enter (R,P,S): ";
    char choice;
    std::cin >> choice;
    return Guess(choice);
}
