//
// Created by JQK on 2016/5/13.
//

#include <stdio.h>
#include <string.h>

/*
 *  首先看看题目要求：
 *  数组A中，除了某一个数字x之外，其他数字都出现了三次，
 *  而x出现了一次。请给出最快的方法找到x。
 *  http://blog.csdn.net/morewindows/article/details/12684497
 *
 */

int FindNumber(int a[],int len){
    int bits[32];
    memset(bits,0,32* sizeof(int));
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < 32; ++j) {
            bits[j] += a[i]&(1<<j);
        }
    }
    int result = 0;
    for (int k = 0; k < 32; ++k) {
        if (bits[k]%3==1){
            result = result | (1<<k);
        }
    }
    return result;
    return 0;
}














