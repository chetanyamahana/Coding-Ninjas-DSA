#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this-> data=d;
        this-> left=NULL;
        this-> right=NULL;  
    }
};
node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data for inserting in left:"<<data<<endl;
    root->left=buildTree(root->left);
    cout << "Enter the data for inserting in right:" <<data<< endl;
    root->right=buildTree(root->right);
    return root;

}
void LevelOrderTraverasal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            //purana level completely traverse hu chuka hai
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    node* root=NULL;
    //Creating a tree
    root=buildTree(root);

    return 0;

}