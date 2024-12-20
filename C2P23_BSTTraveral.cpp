#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*left,*right;
}; 
int n,a;

node* create(int data){
    node* newnode = new node();

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void insert(node *root,int data)
{
    node *p, *previous;
    p = root;
    while(p!=NULL){
        previous = p;
        if(p->data > data) p = p->left;
        else p = p->right;
    }
    if(previous->data > data) previous->left = create(data);
    else previous->right = create(data);
}

void preorder(node* root)
{
    if(root){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    } 
}

void inorder(node* root)
{
    if(root)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(node* root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    } 
}

bool vis[30001];
void level(node* root){
    node *p = root;
    if(root)
    {
        queue<pair<node*,int>> q;
        int last_i = -1,i;
        q.push({p, 0});

        
        while(!q.empty()){
            node *temp = q.front().first; i = q.front().second; 
            q.pop();

            if(last_i!=i){
                if(last_i!=-1)cout<<"\n";
                last_i = i;
                cout << i << ":";
            }

            cout << temp->data << " "; 
            
            
            if(temp->left != NULL) q.push({temp->left,i+1});
            if(temp->right != NULL) q.push({temp->right,i+1});

                
        }
        
    }
}

void leafnode(node *root)
{
    if(root)
    {
        if(!root->left && !root->right) //have no child = leaf
            cout << root->data << " ";
        else{
        leafnode(root->left);
        leafnode(root->right);
    }
    } 
}

int main(){
    node *root=NULL;
    
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(root==NULL) root = create(a);
        else insert(root,a);
    }
    int o;
    cin >> o;
    for(int i=0;i<o;i++)
    {
        cin >> a;
        if(a==1) preorder(root), cout << endl;
        else if(a==2) inorder(root), cout << endl;
        else if(a==3) postorder(root), cout << endl;
        else if(a==4) level(root), cout << endl;
        else leafnode(root), cout << endl;
    }
}