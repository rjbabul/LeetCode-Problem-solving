
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
    void push_(ListNode* root, int new_data){
        ListNode * new_node;
        new_node=new ListNode;

        new_node->next = NULL;
        new_node->val = new_data;

        ListNode* temp;
        //temp = new ListNode;
        temp= root;

        if(temp==NULL){
            temp= new_node;
            return ;
        }
        else{
            while(temp->next!=NULL)temp= temp->next;
            temp->next= new_node;
            return ;
        }

    }
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* root;
         root= new ListNode();
         if(head==NULL) return head;
         map<int, int > mp;
         while(head->next!=NULL){
             if(head->val!= head->next->val && mp[head->val]==0){

              //   cout<<head->val<<" ";
                 push_(root, head->val);
             }
             else{
                 mp[head->val]++;
             }
             head= head->next;
         }
        if(mp[head->val]==0){

                 push_(root, head->val);
        }
        root= root->next;
        return root;
    }
};
