//
//  Guess.hpp
//  Assignment2
//
//  Created by Arya Vatan-Abadi on 2018-10-24.
//  Copyright © 2018 Arya Vatan-Abadi. All rights reserved.
//

#ifndef Guess_hpp
#define Guess_hpp

#include <stdio.h>
#include <cstdlib>

class Guess{
private:
    char guess;
    
public:
    Guess();
    Guess(char guess);
    Guess(int guess);
    char getGuess() const {return guess;}
    int compare(const Guess &other) const;
    
};

#endif /* Guess_hpp */
