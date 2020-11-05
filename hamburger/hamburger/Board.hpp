//
//  Board.hpp
//  hamburger
//
//  Created by Ali Hamdani on 11/4/20.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include <map>
using namespace std;

class Board {
private:
    map<float, float> random_variables[5][7];
    
public:
    Board();
    void printBoard();
    void printRandomVariable(int i , int j);
    bool addRandomVariable(int i, int j, float X, float P);
    
};

#endif /* Board_hpp */