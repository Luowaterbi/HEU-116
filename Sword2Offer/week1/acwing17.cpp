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
    void find(ListNode* u){//�ݹ�find�������vector 
        if(u->next!=NULL) find(u->next);//�����һ��λ�ò�Ϊ�վ������� 
        a.push_back(u->val);//����ʱ����vector 
    }
    
    vector<int> printListFromTailToHead(ListNode* head) {
        if(head!=NULL) find(head);//�����Ϊ�վ��� 
        return a; 
    }
};
