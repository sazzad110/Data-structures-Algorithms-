#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

// Creating a node
struct Node {
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *p)
{
    while(p != NULL) {
        cout<< p<< " ";
        p = p->next;
    }
}

void appendLast(struct Node *newNode)
{
    
}
int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    // we want to add three node to our linked list

    struct Node *head;          // first creating head of the linked list
    struct Node *one   = NULL;    // first node
    struct Node *two   = NULL;    // second node
    struct Node *three = NULL;

    // memory allocated
    one   =(struct Node*) malloc(sizeof(struct Node));
    two   =(struct Node*) malloc(sizeof(struct Node));
    three =(struct Node*) malloc(sizeof(struct Node));

    // assign value
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connecting node
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;    // head pointer assign to one's address 
    printLinkedList(head);

    
    return 0;
}