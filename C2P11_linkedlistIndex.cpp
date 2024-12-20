#include <bits/stdc++.h>
using namespace std;

typedef struct node {
 int value;
 struct node *next;
} node;
int nlist=0;
node *head = NULL;

node *create(int data){
    node *newnode = (node*) malloc(sizeof(node));
    newnode->value = data;
    newnode->next = NULL;

    return newnode;
}

void insert(int index, int data)
{
    if(index<=nlist && index >= 0)
    {
        node *newnode = create(data);
        node *current = head;
        if(head==NULL || index==0)
        {
            newnode->next=head;
            head = newnode;
        }
        else if(index==nlist)
        {
            while(current->next!=NULL)
            {
                current = current->next;
            }
            current->next = newnode;
        }
        else //แทรก ๆ
        {
            for(int i=1;i<index;i++)
            {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
        nlist++;
    }
    else cout << "[" << index << ": "<< data << " not inserted]" << endl;
}

void del(int index){
    if(index<nlist && index >= 0){
        node *current = head;
        int temp;
        if(index==0)
        {
            temp = current->value;
            head = current->next;
            nlist--;
        }
        else
        {
            for(int i=1;i<index;i++)
            {
                current = current->next;
            }
            temp = current->next->value;
            current->next = current->next->next;
            nlist--;

        }
        cout << "[" << index << ": " << temp << " deleted]" << endl;
    }
    else cout << "[" << index <<": not deleted]" << endl;
}

void checkv(int index){
    if(index>=nlist || index<0) cout << "[" << index <<": invalid index]" << endl;
    else
    {
        node *current = head;
        for(int i=0;i<index;i++)
        {
            current = current->next;
        }
        cout << index << ": " << current->value << endl;
    }
}

void print()
{
    node *current = head;
    while(current!=NULL)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}


int main(){
    int n;
    cin >> n;
    char a;
    int index, data;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a!='p') cin >> index;
        if(a=='i') cin >> data;

        if(a=='i') insert(index,data);
        else if(a=='d') del(index);
        else if(a=='v') checkv(index);
        else print();
    }
}