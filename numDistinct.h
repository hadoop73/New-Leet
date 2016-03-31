//
// Created by JQK on 2016/3/29.
//

#ifndef NEW_LEET_NUMDISTINCT_H
#define NEW_LEET_NUMDISTINCT_H

#include "header_file.h"

/*
 * 115. Distinct Subsequences
 * https://leetcode.com/problems/distinct-subsequences/
 * 题目：求从s中可以多少t的子字串
 * 思路：
 * https://leetcode.com/discuss/2143/any-better-solution-that-takes-less-than-space-while-in-time
 *
 */

class Solution {
public:
    int numDistinct(string s, string t) {
        int n = t.length(),m = s.length();
        if (n>m)     return 0;
        //cout << n << " " << m << endl;
        vector<vector<int>> v(n+1,vector<int>(m+1,0));
        for (int k = 0; k <= m; ++k) {
            v[0][k] = 1;
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                v[j][i] = v[j][i-1] + (t[j]==s[i]?v[j-1][i-1]:0);
            }
        }
        return v[n][m];
    }
};

#endif //NEW_LEET_NUMDISTINCT_H
