//
// Created by hadoop on 7/6/16.
//

#ifndef NEW_LEET_MAXAREA_H
#define NEW_LEET_MAXAREA_H

#include "header_file.h"


class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int res = 0,area;
        while (l<r){
            int h = max(height[l],height[r]);
            area = h*(r-l);
            res = max(res,area);
            while (height[l]<=h && l<r) l++;
            while (height[r]<=h && l<r) r--;
        }
        return res;
    }
};


#endif //NEW_LEET_MAXAREA_H
