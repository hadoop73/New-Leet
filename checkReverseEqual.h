//
// Created by JQK on 2016/4/1.
//

#ifndef NEW_LEET_CHECKREVERSEEQUAL_H
#define NEW_LEET_CHECKREVERSEEQUAL_H

#include "header_file.h"

/*http://www.nowcoder.com/practice/bc12808a2b0f445c96a64406d5513e96?tpId=8&tqId=11001&rp=1&ru=/ta/cracking-the-coding-interview&qru=/ta/cracking-the-coding-interview/question-ranking
 *
 * 题目：判断s2是否是s1翻转可得
 * 思路：从s2的一个位置开始判断，若连续len个字符相等，则判断为是翻转得到
 *
 *
 */


class ReverseEqual {
public:
    bool checkReverseEqual(string s1, string s2) {
        // write code here
        int len = s1.length();
        if (len!=s2.length()) return false;

        int t;
        for (int i = 0; i < len; ++i) {
            t = 0;
            while (s1[t]==s2[(i+t)%len]){
                t++;
                if (t==len) return true;
            }
        }
        return false;
    }
};



















#endif //NEW_LEET_CHECKREVERSEEQUAL_H
