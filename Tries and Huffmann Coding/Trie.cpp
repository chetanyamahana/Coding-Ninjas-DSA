#include <iostream>
#include <string>
#include "TrieNode.h"
using namespace std;
class Trie{
    TrieNode *root;
    public:
    Trie(){
        root=new TrieNode('\0');
    }
    void insertWord(TrieNode *root,string word){
        //Base Case
        if(word.size()==0){
            root->isTerminal=true;
            return;
        }
        //Small Calculations
        int index=word[0]-'a';
        if(root->children[index]!=NULL){
            TrieNode *child;
            if(root->children[index]!=NULL){
                child=root->children[index];
            }else{
                child=new TrieNode(word[0]);
                root->children[index]=child;
            }
            //Recursive call
            insertWord(child,word.substr(1));
        }

    }
    // For user
    void insertWord(string word)
    {
        insertWord(root, word);
    }
    bool search(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            if (root->isTerminal == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        int index = word[0] - 'a';
        if (root->children[index] != NULL)
        {
            return search(root->children[index], word.substr(1));
        }
        else
        {
            return false;
        }
    }
    bool search(string word)
    {
        // Write your code here
        return search(root, word);
    }
    //Remove word
    void removeWord(TrieNode* root,string word){
        // Base Case
        if (word.size() == 0)
        {
            root->isTerminal = false;
            return;
        }
        //Small Calculation
        TrieNode *child;
        int index=word[0]-'a';
        if(root->children[index]!=NULL){
            child=root->children[index];
        }else{
            //Word Not found
            return;
        }
        removeWord(child,word.substr(1));

        // Remove child node if it is useless
        if (child->isTerminal==false){
            for(int i=0;i<26;i++){
                if(child->children[i]!=NULL){
                    return;
                }
            }
            delete child;
            root->children[index]=NULL;
        }
    }
    void removeWord(string word){
        removeWord(root,word);
    }
};
int main(){
    Trie t;
    t.insertWord("and");
    t.insertWord("are");
    cout<<t.search("and")<<endl;
    t.removeWord("and");
    cout<<t.search("and");
}