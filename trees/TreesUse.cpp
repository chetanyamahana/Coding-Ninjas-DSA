#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter root Data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter num of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter"<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child); 
        }
    }
    return root;
}
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter number of children of "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child=takeInput();
        root->children.push_back(child);
    }
    return root;
}
void printTree(TreeNode<int>* root){
    // Edge Case
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for (int i = 0; i < root->children.size(); i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
void printTreeLevelWise(TreeNode<int> *root)
{
    // Edge Case
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode<int> *> pendingNodes;
    //cout << root->data << ":";
    pendingNodes.push(root);
    while (pendingNodes.size()!=0)
    {
        TreeNode<int> *front = pendingNodes.front();
        cout<<front->data<<":";
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << ",";
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
        pendingNodes.pop();
    }
}
int countNodes(TreeNode<int>* root){
    //Edge Case
    if(root==NULL){
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=countNodes(root->children[i]);
    }
    return ans;

}
void printAtLevelK(TreeNode<int>* root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;

    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }
}
void preorder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }
}
void postorder(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        postorder(root->children[i]);
    }
    cout << root->data << " ";
}
void deleteTree(TreeNode<int>* root){
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);

    }
    delete root;
}
int main(){
   /* TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);*/
    //TreeNode<int>* root = takeInputLevelWise();
   TreeNode<int> *root = takeInputLevelWise();
   printTreeLevelWise(root);
    cout<<"num: "<<countNodes(root)<<endl;
    cout<<"Level 2: "<<endl;
    printAtLevelK(root,2);
    preorder(root);
    cout<<endl;
    postorder(root);
   // TODO Delete the tree
    //deleteTree(root);
    root->~TreeNode();
}