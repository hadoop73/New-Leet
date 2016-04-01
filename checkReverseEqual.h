//
// Created by JQK on 2016/4/1.
//

#ifndef NEW_LEET_CHECKREVERSEEQUAL_H
#define NEW_LEET_CHECKREVERSEEQUAL_H

#include "header_file.h"

/*http://www.nowcoder.com/practice/bc12808a2b0f445c96a64406d5513e96?tpId=8&tqId=11001&rp=1&ru=/ta/cracking-the-coding-interview&qru=/ta/cracking-the-coding-interview/question-ranking
 *
 * ��Ŀ���ж�s2�Ƿ���s1��ת�ɵ�
 * ˼·����s2��һ��λ�ÿ�ʼ�жϣ�������len���ַ���ȣ����ж�Ϊ�Ƿ�ת�õ�
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
