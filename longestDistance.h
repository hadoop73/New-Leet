//
// Created by JQK on 2016/3/29.
//

#ifndef NEW_LEET_LONGESTDISTANCE_H
#define NEW_LEET_LONGESTDISTANCE_H

#include <vector>
using namespace std;

class LongestDistance {
public:
    int getDis(vector<int> A, int n) {
        // write code here
        int m = 0,left = A[0];
        for (int i = 1; i < n; ++i) {
            if (A[i]<=left)
                left = A[i];
            else
                m = max(A[i]-left,m);
        }
        return m;
    }
};


#endif //NEW_LEET_LONGESTDISTANCE_H
