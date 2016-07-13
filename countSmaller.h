//
// Created by hadoop on 7/7/16.
//

#ifndef NEW_LEET_COUNTSMALLER_H
#define NEW_LEET_COUNTSMALLER_H

#include "header_file.h"

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> v(nums);
        vector<int >res;
        sort(v.begin(),v.end());
        int l,mid,r;
        for (int i = 0; i < ; ++i) {
            int n = nums[i];
            l = 0;
            r = nums.size();
            while (l<r){
                mid = (l+r)/2;
                if (v[mid]==n){
                    res.push_back(mid-i);
                    break;
                } else if (v[mid]>n)
                    r = mid;
                else l = mid + 1;
            }
        }
        return res;
    }
};

#endif //NEW_LEET_COUNTSMALLER_H
