#pragma once
#include "BLOCK.h"
#include<iostream>  
using namespace std;

class Block_J: public Block {
    char shape[4][4] = 
        {{' ',' ',' ',' '},
     {'J',' ',' ',' '},
     {'J','J','J',' '},
     {' ',' ',' ',' '}
    };
public:
   
    char getCell(int i, int j) override {
        return shape[i][j];
    }
};