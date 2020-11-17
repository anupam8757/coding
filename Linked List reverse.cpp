#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};
void insert_LL(node* &head,int data){
    if(head==NULL){
        node* n = new node(data);
        head = n;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node* n = new node(data);
        temp->next = n;

    }
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
void buildList(node* &head){
    int data;
    cin>>data;
    while(data!=-1){
        insert_LL(head,data);
        cin>>data;
    }
}
istream& operator>>(istream &is,node*&head){
    buildList(head);
    return is;
}
ostream& operator<<(ostream &os,node* head){
    print(head);
    return(os);
}
node* LL_Kreverse(node* head,int k){
    node* p = NULL;
    node* c = head;
    node* n;
    int counT = 0;
    while(c!=NULL && counT<k){
        n = c->next;
        c->next = p;
        p = c;
        c = n;
        counT++;
    }
    if(n != NULL){
        head->next = LL_Kreverse(n,k);
    }
    return p;
}
int main()
{
    node* head = NULL;
    cin>>head;
    head = LL_Kreverse(head,3);
    cout<<head;
    return 0;
}
