//
// Created by hadoop on 6/30/16.
//

#ifndef NEW_LEET_STOCK_H
#define NEW_LEET_STOCK_H



#include "header_file.h"

class Solution {
public:
    /**
     * 计算你能获得的最大收益
     *
     * @param prices Prices[i]即第i天的股价
     * @return 整型
     */
    int calculateMax(vector<int> prices) {
        int hold1 = INT_MIN, hold2 = INT_MIN;
        int release1 = 0, release2 = 0;
        for(int i:prices){
            release2 = max(release2, hold2+i);
            hold2    = max(hold2,    release1-i);
            release1 = max(release1, hold1+i);
            hold1    = max(hold1,    -i);
        }
        return release2;
    }
};

#endif //NEW_LEET_STOCK_H
