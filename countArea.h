//
// Created by JQK on 2016/3/31.
//

#ifndef NEW_LEET_COUNTAREA_H
#define NEW_LEET_COUNTAREA_H

#include "header_file.h"

/*  http://www.geeksforgeeks.org/largest-rectangle-under-histogram/
 *  题目：最大直方图矩形面积
 *
 */

class MaxInnerRec {
public:
    int countArea(vector<int> A, int n) {
        // write code here
        if (n<1) return 0;
        int top,area=0,tmp;
        A.push_back(0);
        stack<int>s;
        s.push(0);
        for (int i = 1; i <= n; ++i) {
            while (!s.empty()&&A[i]<A[s.top()]){
                top = s.top();
                s.pop();
                if (s.empty())
                    tmp = i*A[top];
                else
                    tmp = (i-s.top()-1)*A[top];
                if (area<tmp)
                    area = tmp;
            }
            s.push(i);
        }
        return area;
    }
};

#endif //NEW_LEET_COUNTAREA_H
