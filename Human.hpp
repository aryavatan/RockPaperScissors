//
//  Human.hpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#ifndef Human_hpp
#define Human_hpp

#include <stdio.h>
#include <string>
#include "Player.hpp"

class Human : public Player{
private:
    std::string name;
    
public:
    Human(std::string name);
    std::string getName() const {return name;}
    Guess getGuess() const;
    
};

#endif /* Human_hpp */
