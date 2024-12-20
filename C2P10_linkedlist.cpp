#include <bits/stdc++.h>
using namespace std;

typedef struct node {
 int value;
 struct node *next;
} node;

node *head=NULL;

node *create(int data)
{
    node *newnode = (node*) malloc(sizeof(node));

    newnode->value = data;
    newnode->next = NULL;
    return newnode;
}

void insert(int data)
{
    node *newnode = create(data);
    if(head==NULL || head->value>data){
        newnode->next = head;
        head = newnode;
    }
    else{
    node *current = head;

    while((current->next) && (current->next->value < data))
    {
        current = current->next;
    }

    newnode->next = current->next;
    current->next = newnode;
    }
}

void del(int data){
    if(head!=NULL)
    {
        if(head->value==data)
        {
            head = head->next;
            cout << data << " [deleted]" << endl;
            return;
        }

        node *current = head;
        while((current->next) && current->next->value < data)
        {
            current = current->next;
        }
        node *temp = current->next;

        if( temp && temp->value == data)
        {
            cout << data << " [deleted]" << endl;
            current->next = (temp->next);
        }
        else 
        {
            cout << data << " [not deleted]" << endl;
            return;
        }
    }
    else cout << data << " [not deleted]" << endl;
    
}

void print(){
    node *current=head;

    while(current!=NULL)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main(){
    int n,b;
    cin >> n;
    char a;

    for(int i=0;i<n;i++){
        cin >> a;
        if(a!='p') cin >> b;

        if(a=='i') insert(b);
        else if(a=='d') del(b);
        else print();

    }
}

/*
6
i 17
i 100
d 42
p
i 21
p
*/