//
// Created by JQK on 2016/4/1.
//

#ifndef NEW_LEET_BININSERT_H
#define NEW_LEET_BININSERT_H

#include "header_file.h



class BinInsert {
public:
    int binInsert(int n, int m, int j, int i) {
        // write code here
        return n|(m<<j);
    }
};

#endif //NEW_LEET_BININSERT_H
