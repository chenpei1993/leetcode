/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int * InorderTraversal( struct TreeNode *,int *);


bool isValidBST(struct TreeNode* root) {
    
    
    if(root==NULL){
        return true;
    }
    if(root->left ==NULL && root->right ==NULL){
        return true;
    }
    
    
    int num=0;
    int* ans=InorderTraversal(root,&num);
    
    
    for(int i=0;i<num-1;i++){
        if(ans[i]>=ans[i+1]){
            return false;
        }
    }
     
    
    
    return true;
}


int * InorderTraversal( struct TreeNode * root ,int *num){
    int stack[10000],top=-1,i=0;
    int *ans=(int)malloc(sizeof(int)*10000);
        
    while(top>=0 || root!=NULL){
        while(root!=NULL){
            top++;
            stack[top]=root;
            root=root->left;
        }
        root=stack[top]; 
        ans[i]=root->val;
        top--;
        i++;
        root=root->right;
        
    }
    *num=i;
    printf("%d",*num);
   return ans;
    
}
