//
// Created by JQK on 2016/5/13.
//

/*
 * ������һ������A����СΪn������Ԫ�ز�ľ���ֵ����1��
 * �磺A={4,5,6,5,6,7,8,9,10,9}�����ڣ�����A��Ŀ������t��
 * ���ҵ�t��A�е�λ�á��������α��������и��õķ���ô��
 * http://blog.csdn.net/morewindows/article/details/10645269
 *
 */

#include <stdio.h>
#include <math.h>
int FindNumbernArray(int a[],int len,int t){
    int i=0;
    while (i<len){
        if (a[i]==t)
            return i;
        int x = a[i]-t;
        i += abs(x);
    }
    return -1;
}