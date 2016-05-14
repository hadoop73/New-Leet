//
// Created by JQK on 2016/5/13.
//

/*
 * 有这样一个数组A，大小为n，相邻元素差的绝对值都是1。
 * 如：A={4,5,6,5,6,7,8,9,10,9}。现在，给定A和目标整数t，
 * 请找到t在A中的位置。除了依次遍历，还有更好的方法么？
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