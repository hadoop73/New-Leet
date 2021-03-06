//
// Created by hadoop on 7/7/16.
//

#ifndef NEW_LEET_PERMUTEUNIQUE_H
#define NEW_LEET_PERMUTEUNIQUE_H

#include "header_file.h"


class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        helper(nums,0,res);
        return res;
    }




    void helper(vector<int>& nums,int n,vector<vector<int>>& res){
        if (n>=nums.size()){
            res.push_back(nums);
            return;
        }
        for (int i = n; i < nums.size(); ++i) {
            if (i==n||nums[i]!=nums[n]) {
                swap(nums[n], nums[i]);
                helper(nums, n + 1, res);
                swap(nums[i], nums[n]);
            }
        }
    }
};


#endif //NEW_LEET_PERMUTEUNIQUE_H
