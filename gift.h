//
// Created by JQK on 2016/3/29.
//

#ifndef NEW_LEET_GIFT_H
#define NEW_LEET_GIFT_H

#include "header_file.h"

class Gift {
public:
    int getValue(vector<int> gifts, int n) {
        // write code here
        int index = 0, cnt = 1;
        for (int i = 1; i < n; ++i) {
            if (gifts[i]==gifts[index])
                cnt++;
            else cnt--;
            if (cnt<0){
                index =  i;
                cnt = 1;
            }
        }
        cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (gifts[j]==gifts[index])
                cnt++;
        }
        if(cnt>n/2)
            return gifts[index];
        else
            return 0;
    }
};


#endif //NEW_LEET_GIFT_H
