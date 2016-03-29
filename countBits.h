//
// Created by JQK on 2016/3/29.
//

#ifndef NEW_LEET_COUNTBITS_H
#define NEW_LEET_COUNTBITS_H

#include "header_file.h"

/*
 *  Counting Bits
 *  https://leetcode.com/problems/counting-bits/
 *  题目要求：求解0-num，中每一个数二进制表示有多少个 1
 *  思路：对于任意一个数
 *  11010 = 10000 + 1010  // dp中子问题
 *  1010  = 1000  + 10    // 继续分解成子问题
 *  10 = 1 + 0            // 已经求得的子问题
 *
 */
class Solution{
public:
    vector<int> countBits(int num){
        int t;
        vector<int>vct;
        vct.push_back(0);
        for (int i = 1; i <= num; ++i) {
            if ((i&(i-1))==0){
                vct.push_back(1);
                t = i;
                continue;
            }
            vct.push_back(1+vct[i-t]);
        }
        return vct;
    }

};

#endif //NEW_LEET_COUNTBITS_H
