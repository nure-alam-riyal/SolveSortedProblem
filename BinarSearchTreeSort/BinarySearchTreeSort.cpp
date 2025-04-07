#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *left;
    Node *right;
    Node(int val)
    {
        value=val;
        left=NULL;
        right=NULL;
    }

    };
    Node  *InsertValue(Node *root,int val){
        if (root == NULL) {
            return new Node(val);
        }
        if (root->value > val) {
            if (root->left == NULL) {
                root->left = new Node(val);
            } else {
                root->left = InsertValue(root->left, val);
            }
        } else {
            if (root->right == NULL) {
                root->right = new Node(val);
            } else {
                root->right = InsertValue(root->right, val);
            }
        }
        return root;
    }
    void SortOfvaluse(Node *Root){
        if(Root==NULL){

        
        }
        else{
            SortOfvaluse(Root->left);
            cout<<Root->value<<" ";
            SortOfvaluse(Root->right);
        }
    }
    int main(){
        Node *Root=NULL;
        int num,value;
        cout<<"Enter the number of value you will insert :";
        cout<<endl;
        cin>>num;
        cout<<"Enter Your Values:";
        cout<<endl;
        for(int i=0;i<num;i++){
            cin>>value;
            Node *newNode=new Node(value);
           if(Root==NULL){
            Root=newNode;
           }
           else{
            Root=InsertValue(Root,value);
           }
           }
            cout<<"sorted Valuse:";
            cout<<endl;
           SortOfvaluse(Root);

        }
    
