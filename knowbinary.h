//
// Created by JQK on 2016/3/28.
//

#ifndef NEW_LEET_KNOWBINARY_H
#define NEW_LEET_KNOWBINARY_H

class Solution {
public:
    /**
     * 获得两个整形二进制表达位数不同的数量
     *
     * @param m 整数m
     * @param n 整数n
     * @return 整型
     */
    int countBitDiff(int m, int n) {
        int t = m^n;
        int cnt = 0;
        while (t!=0){
            t = t&(t-1);
            cnt++;
        }
        return cnt;
    }
};


#endif //NEW_LEET_KNOWBINARY_H
