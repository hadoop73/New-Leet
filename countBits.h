//
// Created by JQK on 2016/3/29.
//

#ifndef NEW_LEET_COUNTBITS_H
#define NEW_LEET_COUNTBITS_H

#include "header_file.h"

/*
 *  Counting Bits
 *  https://leetcode.com/problems/counting-bits/
 *  ��ĿҪ�����0-num����ÿһ���������Ʊ�ʾ�ж��ٸ� 1
 *  ˼·����������һ����
 *  11010 = 10000 + 1010  // dp��������
 *  1010  = 1000  + 10    // �����ֽ��������
 *  10 = 1 + 0            // �Ѿ���õ�������
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
