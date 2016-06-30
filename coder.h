//
// Created by hadoop on 6/30/16.
//

#ifndef NEW_LEET_CODER_H
#define NEW_LEET_CODER_H


#include "header_file.h"

/*
 * http://www.nowcoder.com/practice/a386fd3a5080435dad3252bac76950a7?tpId=49&tqId=29280&rp=1&ru=/ta/2016test&qru=/ta/2016test/question-ranking
 * 主要还是 C++ 字符串的查找问题，比较好的写法
 * while((pos = A[i].find("coder", pos+5)) != string::npos)
                count++;
 */

class Coder {
public:
    vector<string> findCoder(vector<string> A, int n) {
        // write code here
        vector<int> B;
        for (int i = 0; i < n; ++i) {
            B.push_back(stringNum(A[i]));
        }
        vector<string> C ;
        for (int j = 0; j < n; ++j) {
            int t = 0;
            int index = -1;
            for (int i = 0; i < n; ++i) {
                if (B[i]>t){
                    t = B[i];
                    index = i;
                }
            }
            if (t>0){
                C.push_back(A[index]);
                B[index] = 0;
            }
        }
        return C;
    }

private:
    int stringNum(string s){
        std::transform(s.begin(),s.end(),s.begin(),::tolower);
        int cnt = 0;
        std::size_t start = 0;
        while (1){

            start = s.find("coder",start);
            if (start!=std::string::npos){
                cnt ++ ;
                start = start + 5;
            }
            else return cnt;
        }
    }
};



#endif //NEW_LEET_CODER_H
