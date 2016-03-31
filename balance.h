//
// Created by JQK on 2016/3/31.
//

#ifndef NEW_LEET_BALANCE_H
#define NEW_LEET_BALANCE_H

#include "header_file.h"

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


#endif //NEW_LEET_BALANCE_H
