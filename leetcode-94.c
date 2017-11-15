/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int stack[1000], top = -1, i = 0;
    int *return_array = (int*)malloc(sizeof(int) * 1000);
    
    while(-1 != top||NULL != root){
        while(NULL != root){
            top++;
            stack[top] = root;
            root = root->left;
        }
        root = stack[top];
        top--;
        return_array[i] = root->val;
        i++;
        root = root->right;
    }
    *returnSize = i;
    return return_array;
}
