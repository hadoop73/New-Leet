//
// Created by JQK on 2016/5/13.
//

#include <stdio.h>
#include <string.h>

/*
 *  ���ȿ�����ĿҪ��
 *  ����A�У�����ĳһ������x֮�⣬�������ֶ����������Σ�
 *  ��x������һ�Ρ���������ķ����ҵ�x��
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














