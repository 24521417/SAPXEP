#pragma once
#include "BLOCK.h"
#include <iostream>
using namespace std;

class BlockI : public Block {
    char shape[4][4] = {
        {' ', 'I', ' ', ' '},
        {' ', 'I', ' ', ' '},
        {' ', 'I', ' ', ' '},
        {' ', 'I', ' ', ' '}
    };
public:
    virtual char getCell(int i, int j) = 0;
};
