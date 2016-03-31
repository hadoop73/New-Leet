//
// Created by JQK on 2016/3/31.
//

#ifndef NEW_LEET_COINCHANGE_H
#define NEW_LEET_COINCHANGE_H

#include "header_file.h"

/*
 * https://leetcode.com/discuss/76194/c-o-n-amount-time-o-amount-space-dp-solution
 *
 *
 */

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>v(amount+1,amount+1);
        v[0] = 0;
        for (int coin:coins){
            for (int i = coin; i <= amount; ++i) {
                v[i] = min(v[i],v[i-coin]+1);
            }
        }
        return (v[amount]>amount?-1:v[amount]);
    }
};

#endif //NEW_LEET_COINCHANGE_H
