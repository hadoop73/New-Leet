//
// Created by hadoop on 7/14/16.
//

#ifndef NEW_LEET_COMBINATIONSUM2_H
#define NEW_LEET_COMBINATIONSUM2_H

#include "header_file.h"

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> v;
        vector<int> t;
        helper(v,0,target,t,candidates);
        return v;
    }
    void helper(vector<vector<int>>& v,int start,int target,vector<int>& t,vector<int>& candidates){
        if (start>=candidates.size())
            return;
        if (target==0){
            vector<int>s(t);
            v.push_back(s);
            return;
        }
        if (candidates[start]>target)
            return;

        t.push_back(candidates[start]);
        helper(v,start+1,target-candidates[start],t,candidates);
        t.pop_back();
        helper(v,start+1,target,t,candidates);
    }
};


#endif //NEW_LEET_COMBINATIONSUM2_H
