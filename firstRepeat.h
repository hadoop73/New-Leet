//
// Created by JQK on 2016/3/29.
//

#ifndef NEW_LEET_FIRSTREPEAT_H
#define NEW_LEET_FIRSTREPEAT_H

#include <string>
#include <map>

using namespace std;

class FirstRepeat {
public:
    char findFirstRepeat(string A, int n) {
        // write code here
        map<char,int>m;
        for (int i = 0; i < n; ++i) {
            if(m.count(A[i])==0)
                m[A[i]]=1;
            else return A[i];
        }
        return A[n-1];
    }
};


#endif //NEW_LEET_FIRSTREPEAT_H
