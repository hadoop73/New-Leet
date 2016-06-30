//
// Created by hadoop on 6/29/16.
//

#ifndef NEW_LEET_GIT_H
#define NEW_LEET_GIT_H

#include "header_file.h"

class Solution {
public:
    /**
     * 返回git树上两点的最近分割点
     *
     * @param matrix 接邻矩阵，表示git树，matrix[i][j] == '1' 当且仅当git树中第i个和第j个节点有连接，节点0为git树的跟节点
     * @param indexA 节点A的index
     * @param indexB 节点B的index
     * @return 整型
     */
    int getSplitNode(vector<string>& matrix, int indexA, int indexB) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag[n][m];
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                flag[i][j] = false;


    }

    int helper(vector<string>&matrix,bool **flag,int indexA,int indexB,int index){
        int m = matrix[0].size();
        for (int i = 0; i < m; ++i) {
            if
        }




    }


};





#endif //NEW_LEET_GIT_H
