//
//  Side.h
//  CubeSolver
//
//  Created by Henry West on 9/16/14.
//  Copyright (c) 2014 Henry West. All rights reserved.
//

#ifndef __CubeSolver__Side__
#define __CubeSolver__Side__

#include <iostream>
#include <vector>
#include "Square.h"

using namespace std;

class Side {
private:
    vector<Square> squares;
    struct Row {
        vector<Square> rowParts;
        Row (int dir, Square end) {

        }
    };
public:
    vector<Square> getSquares();

};

#endif /* defined(__CubeSolver__Side__) */
