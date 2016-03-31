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

/**
 * Solution (DP):
 * We keep a m*n matrix and scanning through string S, while
 * m = T.length() + 1 and n = S.length() + 1
 * and each cell in matrix Path[i][j] means the number of distinct subsequences of
 * T.substr(1...i) in S(1...j)
 *
 * Path[i][j] = Path[i][j-1]            (discard S[j])
 *              +     Path[i-1][j-1]    (S[j] == T[i] and we are going to use S[j])
 *                 or 0                 (S[j] != T[i] so we could not use S[j])
 * while Path[0][j] = 1 and Path[i][0] = 0.
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
                v[j][i] = v[j][i-1] + (t[j-1]==s[i-1]?v[j-1][i-1]:0);
            }
        }
        return v[n][m];
    }
};

#endif //NEW_LEET_NUMDISTINCT_H
