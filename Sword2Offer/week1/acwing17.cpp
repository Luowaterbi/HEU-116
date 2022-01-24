/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int>a;
    void find(ListNode* u){//递归find反向插入vector 
        if(u->next!=NULL) find(u->next);//如果下一个位置不为空就往下跳 
        a.push_back(u->val);//回溯时插入vector 
    }
    
    vector<int> printListFromTailToHead(ListNode* head) {
        if(head!=NULL) find(head);//如果不为空就找 
        return a; 
    }
};
