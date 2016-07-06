//
// Created by hadoop on 7/6/16.
//

#ifndef NEW_LEET_THREESUMCLOSEST_H
#define NEW_LEET_THREESUMCLOSEST_H


#include "header_file.h"

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l,r,sum;
        int gap = INT_MAX,ans;
        for (int i = 0; i < n-2; ++i) {
            l = i + 1;
            r = n - 1;
            while (l<r){
                sum = nums[i] + nums[l] + nums[r];
                int d = std::abs(sum-target);
                if (d<gap){
                    gap = d;
                    ans = sum;
                }
                if (sum>target)
                    r--;
                else
                    l++;
            }
        }
        return ans;
    }
};

#endif //NEW_LEET_THREESUMCLOSEST_H
