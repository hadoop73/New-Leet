//
// Created by hadoop on 7/2/16.
//

#ifndef NEW_LEET_LETTERCOMBINATIONS_H
#define NEW_LEET_LETTERCOMBINATIONS_H


#include "header_file.h"

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.empty()) return v;
        static const string m[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        for (int i = 0; i < digits.size(); ++i) {
            vector<string>tmp;
            string str = m[digits[i]-'0'];
            for (int j = 0; j < str.length(); ++j) {
                for (string e:v){
                    tmp.push_back(e+str[j]);
                }
            }
            v = tmp;
        }
        return v;
    }

};

#endif //NEW_LEET_LETTERCOMBINATIONS_H
