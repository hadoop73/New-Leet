//
// Created by hadoop on 6/30/16.
//

#ifndef NEW_LEET_FLIP_H
#define NEW_LEET_FLIP_H

#include "header_file.h"

class Flip {
public:
    vector<vector<int> > flipChess(vector<vector<int> > A, vector<vector<int> > f) {
        // write code here
        int m = A.size();
        int n = A[0].size();
        for (vector<int> v:f){
            int x = v[0];
            int y = v[1];
            if (x-1>=0)
                A[x-1][y] = A[x-1][y] ^ 1;
            if (y+1<n)
                A[x][y+1] = A[x][y+1] ^ 1;
            if (x+1<m)
                A[x+1][y] = A[x+1][y] ^ 1;
            if (y-1>=0)
                A[x][y-1] = A[x][y-1] ^ 1;
        }
        return A;
    }
};

#endif //NEW_LEET_FLIP_H
