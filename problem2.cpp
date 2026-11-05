#include<iostream>

using namespace std;
struct node{
    int data;
    node* next;
};
int main(){
node *head=new node();
node *first=new node();
node *second=new node();
head->data=10;
head->next=first;
first->data=20;
first->next=second;
second->data=30;
second->next=NULL;
node *temp=head;

while(temp!=NULL){
    if(temp->next!=NULL){

        cout<<temp->data<<"->";
    }
    else{
         cout<<temp->data;
    }
temp=temp->next;
}
return 0;

}
