//
// Created by JQK on 2016/4/21.
//

#ifndef NEW_LEET_COUNTNODES_H
#define NEW_LEET_COUNTNODES_H


#include <math.h>

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root==NULL) return 0;
        int h1=0,h2=0;
        TreeNode *node = root;
        while (node){
            h1++;
            node = node->left;
        }
        node = root;
        while (node){
            h2++;
            node = node->right;
        }
        if (h1==h2) return pow(2,h1)-1;

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};








#endif //NEW_LEET_COUNTNODES_H
