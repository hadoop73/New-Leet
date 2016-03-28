//
// Created by JQK on 2016/3/28.
//

#ifndef NEW_LEET_BINARYSEARCH_H
#define NEW_LEET_BINARYSEARCH_H

#include <vector>
using namespace std;

class BinarySearch {
public:
    int getPos(vector<int> A, int n, int val) {
        // write code here
        int l = 0,r = n-1;
        int mid;
        while (l<r){
            mid = (l+r)/2;
            if (A[mid]<val)
                l = mid+1;
            else r = mid;
        }
        if (A[r]!=val)
            r = -1;
        return r;
    }
};

#endif //NEW_LEET_BINARYSEARCH_H
