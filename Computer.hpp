//
//  Computer.hpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#ifndef Computer_hpp
#define Computer_hpp

#include <stdio.h>
#include "Player.hpp"

class Computer : public Player{
public:
    //Explicitly pass an initial score of 5 for Computer player
    Computer() : Player(5) {}
    Guess getGuess() const {return Guess();}
};

#endif /* Computer_hpp */
