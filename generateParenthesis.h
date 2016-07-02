//
// Created by hadoop on 7/2/16.
//

#ifndef NEW_LEET_GENERATEPARENTHESIS_H
#define NEW_LEET_GENERATEPARENTHESIS_H

#include "header_file.h"

class Solution {
public:
    vector<string> generateParenthesis(int n) {
            vector<string> v;
            helper(v,"",n,0);
            return v;
    }
    void helper(vector<string>& v,string str,int n,int m){
            if (n==0&&m==0){
                v.push_back(str);
                return;
            }

            if (m>0) helper(v,str+")",n,m-1);
            if (n>0) helper(v,str+"(",n-1,m+1);
    }
};

#endif //NEW_LEET_GENERATEPARENTHESIS_H
