//
// Created by JQK on 2016/3/31.
//

#ifndef NEW_LEET_BALANCE_H
#define NEW_LEET_BALANCE_H

#include "header_file.h"

/*
 * 题目：二叉树平衡检查
 * http://www.nowcoder.com/practice/b6bbed48cd864cf09a34a6ca14a3976f?tpId=8&tqId=11011&rp=1&ru=/ta/cracking-the-coding-interview&qru=/ta/cracking-the-coding-interview/question-ranking
 * 思路：判断一棵树是否是平衡二叉树
 *      判断每个节点是否为平衡二叉树
 *      如果在每一棵树都通过深度来判断，则会存在重复判断的情况
 *      因此可以用一个全局变量作为结果来判断，如果已经不是平衡二叉树则返回
 *
 *
 */

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

class Balance {
public:
    bool res = true;
    bool isBalance(TreeNode* root) {
        // write code here
        if (root==NULL) return true;
        helper(root);
        return res;
    }

    int helper(TreeNode* root){
        if (root==NULL) return 0;
        if (res== false)
            return 0;
        int l = helper(root->left);
        int r = helper(root->right);
        if (abs(l-r)>1){
            res = false;
        }
        return max(l,r)+1;
    }
};

class Balance {
public:
    bool isBalance(TreeNode* root) {
        // write code here
        int high=0;
        return isBalance1(root,high);
    }
    bool isBalance1(TreeNode* root,int &high)
    {
        if(root==NULL)
        {
            high=0;
            return true;
        }
        int lhigh,rhigh;
        if(!isBalance1(root->left,lhigh)||!isBalance1(root->right,rhigh))
            return false;
        if(lhigh-rhigh>1||lhigh-rhigh<-1)
            return false;
        high=(lhigh>=rhigh?lhigh:rhigh)+1;
        return true;
    }
};


#endif //NEW_LEET_BALANCE_H
