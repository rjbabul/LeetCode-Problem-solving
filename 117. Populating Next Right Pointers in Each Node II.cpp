
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:

    Node* connect(Node* root) {

        if(root==NULL)
           return root ;
        queue<Node *> q;
        q.push(root);

        while(!q.empty())
        {
            int size= q.size();
            Node * temps = NULL;
            while(size--)
            {
                Node* temp = q.front();
                q.pop();
                if(temps!=NULL)
                   temps->next= temp;

                temps= temp;

                if(temp->left)
                   q.push(temp->left);
                if(temp->right)
                   q.push(temp->right);
            }
             temps->next=NULL;
        }
        return root;
    }
};
