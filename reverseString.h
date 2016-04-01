//
// Created by JQK on 2016/4/1.
//

#ifndef NEW_LEET_REVERSESTRING_H
#define NEW_LEET_REVERSESTRING_H

#include "header_file.h"

/*
 *http://www.nowcoder.com/practice/2442435405fa432b99b8ec1cb0315902?tpId=8&tqId=10995&rp=1&ru=/ta/cracking-the-coding-interview&qru=/ta/cracking-the-coding-interview/question-ranking
 * Ô­´®·­×ª
 *
 *
 */

class Reverse {
public:
    string reverseString(string iniString) {
        // write code here
        int len = iniString.length();
        if (len<2) return iniString;
        char t;
        int l = 0,r = len-1;
        while (l<r){
            t = iniString[l];
            iniString[l] = iniString[r];
            iniString[r] = t;
            l++;r--;
        }
        return iniString;
    }
};

#endif //NEW_LEET_REVERSESTRING_H
