// https://leetcode.com/problems/count-complete-tree-nodes/

#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};
void inorder(TreeNode* root, int& count){
    if(root == NULL){
        return;
    }
    else{
        inorder(root->left, count);
        count++;
        inorder(root->right,count);
    }  
}
int countNodes(TreeNode* root) {
    int count = 0;
    inorder(root,count);
    return count;
}
int main (){
    TreeNode* root = new TreeNode(3);
    root -> left = new TreeNode(5);
    int ans = countNodes(root);
    cout << ans << endl;
    return 0;
}