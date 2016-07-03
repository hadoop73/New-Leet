//
// Created by hadoop on 7/2/16.
//

#ifndef NEW_LEET_NUMDECODINGS_H
#define NEW_LEET_NUMDECODINGS_H


#include "header_file.h"

class Solution {
public:
    int numDecodings(string s) {
        if (s=="") return 0;
        int ln = s.size();
        vector<int> v(ln+1);
        v[ln] = 1;
        v[ln-1] = s[ln-1]=='0'?0:1;
        for (int i = ln-2; i >=0 ; --i) {
            if (s[i]=='0') {
                v[i] = 0;
                continue;
            }
            int t = (s[i]-'0')*10+s[i+1]-'0';
            if (t<27){
                if (t%10==0)
                    v[i] = v[i+2];
                else v[i] = v[i+1]+v[i+2];
            } else{
                v[i] = v[i+1];
            }
        }
        return  v[0];
    }
};

#endif //NEW_LEET_NUMDECODINGS_H
