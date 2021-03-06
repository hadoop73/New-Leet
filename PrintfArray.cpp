//
// Created by JQK on 2016/5/13.
//

/*
 *  28）给定一数组a[N]，我们希望构造数组b [N]，
 *  其中b[j]=a[0]*a[1]…a[N-1] / a[j]，在构造过程中，不允许使用除法：
 *  要求O（1）空间复杂度和O（n）的时间复杂度
 *  除遍历计数器与a[N] b[N]外，不可使用新的变量
 *  (包括栈临时变量、堆空间和全局静态变量等）；
 *  实现程序（主流编程语言任选）实现并简单描述。
 *
 *
 */

#include <stdio.h>

void printArray(int a[],int b[],int len){
    b[0] = 1;
    for (int i = 1; i < len; ++i) {
        b[i] = b[i-1]*a[i-1];
    }
    for (int j = len-1; j >0 ; --j) {
        a[j] = a[j]*a[j+1];
    }
    for (int k = 0; k < len-1; ++k) {
        b[k] = b[k]*a[k+1];
    }
}


//  另一种解法，首先
/* b[0] = 1
 * b[1] = a[0]*b[0] = a[0]
 * b[2] = a[1]*b[1] = a[1]*a[0]
 * b[3] = a[2]*b[2] = a[2]*a[1]*a[0]
 *
 * 然后，再从尾到头在计算一次
 * t = 1
 * b[3] = b[3]*t;  t *= a[3] = a[3]
 * b[2] = b[2]*t;  t *= a[2] = a[2]*a[3]
 * b[1] = b[1]*t;  t *= a[1] = a[1]*a[2]*a[3]
 * b[0] = b[0]*t;
 *
 */

