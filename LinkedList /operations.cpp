#include <iostream>
using namespace std;
class Node{
  public:
  int data ; 
  Node*next; 
  Node(int Data , Node*Next){
    data = Data ; next = Next;
  }
}; 
Node*head = nullptr ; 
void createlistfromarr(){
  int arr[8]={1,2,3,4,5,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]); head = nullptr ; 
  Node*temp = nullptr ; 
  for(int i=0 ; i<n ; i++){
    Node*newnode = new Node{arr[i],nullptr}; 
    if(head==nullptr){head = newnode; temp = head ; }
    else{
      temp -> next = newnode  ; temp = newnode ; 
    }
  }
  cout<<"Linked List created"<<endl ; 
  
}
void traverselist(){
  if(!head)cout<<"List is empty"<<endl ;
  Node*temp = head ; 
  while(temp){
    cout<<temp->data; temp= temp->next ; cout<<" " ; 
  }
  cout<<endl ; 
}

void insertathead(int val){
  Node*newhead = new Node{val,head}; 
  head = newhead ; 
}
void insertattail(int val){
  Node*newtail = new Node{val,head}; 
  if(!head){head = newtail;}
  Node*temp= head; 
  while(temp->next!=nullptr){
    temp = temp->next; 
  }
  temp->next = newtail; newtail->next=nullptr;
}

void insertatloc(int val,int loc){
  if(loc==1){insertathead(val); return ; }
  Node*temp = head ; 
  for(int i=1 ; i<loc-1 && temp!=nullptr ; i++){
    temp = temp ->next ; 
  }
  Node*newnode = new Node{val,temp->next} ; 
  temp->next = newnode; 
}

void deletehead(){
  Node*temp = head ; head = head ->next ; delete temp; 
}
void deleteattail(){
Node*temp = head ; while(temp->next->next){temp= temp->next ; 
}
delete temp->next ; temp->next = nullptr ;  
}
void deleteatloc(int loc ){
  if(loc==1){deletehead(); return ; }
  Node*temp = head ; 
  for(int i=1 ; i<loc-1 && temp!=nullptr; i++)
    temp = temp->next ; 
    if(temp==nullptr || temp->next == nullptr){
      return ;
    }
    Node*todelete = temp->next ;
    temp->next = todelete->next ; delete todelete; 
}
int main() 
{
   createlistfromarr(); traverselist(); 
   insertathead(6); traverselist(); 
   insertattail(4); traverselist(); 
   insertatloc(9,5); traverselist(); 
   deletehead(); traverselist(); 
   deleteattail(); traverselist(); 
   deleteatloc(4); traverselist(); 
  return 0;
}
