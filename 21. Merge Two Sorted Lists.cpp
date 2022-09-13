
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void push(ListNode * head, int n){
        ListNode* root ;
        root=head;
        ListNode* newNode;
        newNode= new ListNode();
        newNode->next=NULL;
        newNode->val= n;

        if(head==NULL){
            root= newNode;
            root->next=NULL;
            return ;
        }
        while(root->next!=NULL) root= root->next;
        root->next=newNode;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*root1, *root2;
        vector<int > vt;
        root1= list1;
        root2= list2;
        while(root1!=NULL){
            vt.push_back(root1->val);
            root1=root1->next;
        }
        while(root2!=NULL){
            vt.push_back(root2->val);
            root2=root2->next;
        }
        sort(vt.begin(), vt.end());
        ListNode* head;
        head = new ListNode;
        head->val=NULL;

        for(int i=0;i<vt.size();i++){
            push(head, vt[i]);
        }
        head= head->next;
        return head;

    }
};
