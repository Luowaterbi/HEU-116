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
        if(p->right!=NULL){//�����ǰ���Ҷ��Ӳ�Ϊ�գ����Ҷ��������Ľڵ� 
            TreeNode* now=p->right;
            while(now->left) now=now->left; 
            return now;
        }
        while(p->father&&p==p->father->right) p=p->father;//��������Ѱ�ҵ�һ����ǰ�ڵ㸸�׵�������ǵ�ǰ�ڵ�ĵ� 
        return p->father;//�����ĸ��ڵ���Ǻ�� 
        /*
        while (p->father && p == p->father->right) p = p->father;
        return p->father;
        */
    }
};
