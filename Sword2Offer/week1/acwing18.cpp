/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define fr(i,a,b) for(int i=a;i<=b;i++)
class Solution {
public:
    unordered_map<int,int> pos;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        fr(i,0,n-1) pos[inorder[i]]=i;//��ÿ����������������е���� 
        return dfs(preorder,inorder,0,n-1,0,n-1); 
    }
    TreeNode* dfs(vector<int>&pre,vector<int>&in,int px,int py,int ix,int iy){
        if(px>py) return NULL;//�������Ϊ������NULLָ�� 
        int k=pos[pre[px]]-ix;//k�����ĸ�����������е�λ�ã����������������һ����Ϊ�� 
        TreeNode* now=new TreeNode(pre[px]);  
        now->left=dfs(pre,in,px+1,px+k,ix,ix+k-1);//������ 
        now->right=dfs(pre,in,px+k+1,py,ix+k+1,iy);//������ 
        return now;
    }
};
