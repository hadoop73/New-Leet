//
// Created by hadoop on 7/6/16.
//

#ifndef NEW_LEET_THREESUM_H
#define NEW_LEET_THREESUM_H

#include "header_file.h"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        if (n<3)
            return res;
        sort(nums.begin(),nums.end());

        int l,r,s;
        for (int i = 0; i < n-2; ++i) {
            if (i>0&&nums[i]==nums[i-1])
                continue;
            l = i + 1;
            r = n - 1;
            while (l<r){
                s = nums[i]+nums[l]+nums[r];
                if (s==0){
                    vector<int > v = {nums[i],nums[l],nums[r]};
                    res.push_back(v);
                    while (l<r&&s==0) {
                        l++;
                        s = nums[i]+nums[l]+nums[r];
                    }
                }
                if (s<0) l++;
                else    r--;
            }
        }
        return res;
    }
};

#endif //NEW_LEET_THREESUM_H
