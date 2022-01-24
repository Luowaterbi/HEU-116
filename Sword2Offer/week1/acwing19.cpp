/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode *father;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL), father(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* p) {
        if(p->right!=NULL){//如果当前点右儿子不为空，找右儿子里最靠左的节点 
            TreeNode* now=p->right;
            while(now->left) now=now->left; 
            return now;
        }
        while(p->father&&p==p->father->right) p=p->father;//否则向上寻找第一个当前节点父亲的左儿子是当前节点的点 
        return p->father;//这个点的父节点就是后继 
        /*
        while (p->father && p == p->father->right) p = p->father;
        return p->father;
        */
    }
};
