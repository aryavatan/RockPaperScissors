//
//  Player.cpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#include "Player.hpp"

Player::Player(int score){
    this->score = score;
}

Player& Player::operator--(){
    this->score--;
    return *this;
}
