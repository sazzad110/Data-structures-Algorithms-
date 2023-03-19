#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

  //  #define sazzad



struct Node {
    int data;
    struct Node *next;
};

struct Node *root = NULL;     // root is global so that all function easily get it
int len;                      // list's linked stored here

void append(void);
void addBegin(void);
void addAfter(void);
int length(void);
void display(void);
void DeleteFirstNode(void);
void DeleteAnyNode(void);


int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int choice; 
    while(1) {

        cout<< "***Single Linked List Implementation***"<<"\n\n";
        cout<<"1.Append"<<endl;
        cout<<"2.Add Begin"<<endl;
        cout<<"3.Add After"<<endl;
        cout<<"4.Length"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Delete First Node"<<endl;
        cout<<"7.Delete Any Node"<<endl;
        cout<<"8.Exit"<<endl;

        cout<< "Enter your choice: ";
        cin>>choice;

        switch(choice) {

            case 1 :     append();
                         break;

            case 2 :     addBegin();
                         break;

            case 3 :     addAfter();
                         break;

            case 4 :     len = length();                  // len var declare in globally
                         cout<< "Length:  "<<len<<"\n\n";
                         break;

            case 5 :     display();
                         break;

            case 6 :     DeleteFirstNode();
                         break;

            case 7 :     DeleteAnyNode();
                         break;

            case 8 :     exit(1);
            default:     cout<< "Invalid Input"<<endl;   
        }

    }

        
    return 0;
}

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

int length()
{
    struct Node *temp;
    temp = root;
    int count = 0;

    while(temp!=NULL) {  // temp mean ekhane shudhu addrs part e check kora hoi . 
        count++;
        temp = temp->next;
    }

    return count;
}

void display()
{
    struct Node *temp = root;

    if(temp == NULL) {
        cout<< "Lis is empty\n\n";
    } else {

        while(temp != NULL) {

            cout<<temp->data<< "-->";
            temp = temp->next;
        }
        cout<<endl;
    }
}

void addBegin(void)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    cout<<"Enter node data: ";
    cin>>newNode->data;
    newNode->next = NULL;

    if(root == NULL) {
        root = newNode;
    } else {

        newNode->next = root;
        root = newNode;
    }

}


void addAfter(void)
{
    struct Node *p = root;
    int loc;
    cout<< "Enter location where to add new node"<<endl;
    cin>>loc;

    int i=1;
    while(i<loc) {
        p =  p-> next;
        i++;
    }

    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    cout<< "Enter node data"<<endl;
    cin>>newNode->data;

    newNode -> next = p -> next;
    p ->next = newNode;


}


void DeleteFirstNode(void)
{
    struct Node* temp = root;
    cout<< "Delete first node of :"<<temp->data<<endl;

    root = temp->next;
    temp->next = NULL;
    free(temp);
}

void DeleteAnyNode(void)
{
    struct Node* p = root;
    struct Node* q;
    int loc;
    cout<< "Enter the location of which node you want to delete"<<endl;
    cin>>loc;

    for(int i=1;i<loc-1;i++) {
        p = p->next;
    }

    q = p->next;  // point which node i want to delte

    // deleting code
    p -> next = q -> next;
    q -> next = NULL;
    free(q);


}