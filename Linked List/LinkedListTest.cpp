#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

struct Node {
    int data;
    struct Node *next;
};

struct Node *root = NULL;     // root is global so that all function easily get it
int len;

void append()
{
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    cout<< "Enter node data: ";
    cin>>newNode->data;
    cout<<"\n\n";
    newNode->next = NULL;

    if(root == NULL) {
        root = newNode;
    } else {

        struct Node *p;
        p = root;

        while(p->next != NULL) {

            p = p->next;
        }
        p ->next = newNode; 
    }
}

void display(struct Node* temp)
{
    if(temp == NULL) return;

    cout<<temp->data<<endl;

    display(temp->next);
}

int main()
{
    int choose;

    while(1) {
    
        cin>>choose;

        if(choose == 1) {

            append();
        } else {

            display(root);
        }

    }

}

