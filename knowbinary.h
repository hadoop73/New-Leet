//
// Created by JQK on 2016/3/28.
//

#ifndef NEW_LEET_KNOWBINARY_H
#define NEW_LEET_KNOWBINARY_H

class Solution {
public:
    /**
     * ����������ζ����Ʊ��λ����ͬ������
     *
     * @param m ����m
     * @param n ����n
     * @return ����
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
