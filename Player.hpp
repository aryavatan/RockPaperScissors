//
//  Player.hpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Guess.hpp"

class Player{
private:
    int score;
    
public:
    Player(int score);
    int getScore() const {return score;}
    Player& operator--();
    
};


#endif /* Player_hpp */
