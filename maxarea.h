//
// Created by JQK on 2016/3/29.
//

#ifndef NEW_LEET_MAXAREA_H
#define NEW_LEET_MAXAREA_H

#include <vector>
#include <stack>
using namespace std;

class MaxInnerRec {
public:
    int countArea(vector<int> A, int n) {
        // write code here
        stack<int> s;
        int res = 0;
        s.push(0);
        int i = 1;
        while (!s.empty()){
            if (i<A.size()){

            }

        }
        for (int i =0;i<A.size();i++){
            if (!s.empty()){
                int top = s.top();
                if (A[i]<s.top()){
                    res = max();
                }
            } else{
                s.push(A[i]);
            }
        }
    }
};


#endif //NEW_LEET_MAXAREA_H
