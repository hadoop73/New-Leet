//
// Created by JQK on 2016/4/1.
//

#ifndef NEW_LEET_FINDNEXT_H
#define NEW_LEET_FINDNEXT_H

#include "header_file.h"


/*
 *
 * ��Ŀ����һ���ϴ�Ԫ��
 * ˼·������ÿһ�������ж�stack�У��Ƿ���Լ�С�����С�������Ϊ���
 *
 *
 */
class NextElement {
public:
    vector<int> findNext(vector<int> A, int n) {
        // write code here
        if (n==0) return A;
        stack<int>s;
        vector<int>v(n,0);
        s.push(0);
        int top;
        for (int i = 1; i < n; ++i) {
            while (!s.empty()&&A[i]>A[s.top()]){
                v[s.top()] = A[i];
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty()){
            v[s.top()] = -1;
            s.pop();
        }
        return v;
    }
};


#endif //NEW_LEET_FINDNEXT_H
