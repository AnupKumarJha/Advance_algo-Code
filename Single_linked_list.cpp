#include<bits/stdc++.h>
using namespace std;

//defining the class of linked List;
//......................................................
class Node{
    
public:    
    
int key;
int data;
Node* next;
//...............constructor for Node Class...............
Node(){
    key=0;
    data=0;
    next=NULL;
}
//......another constructor with parameter..............
Node(int k,int d){
    key=k;
data=d;
}


    
};
//..................................Single_Linked_list...........
class Single_Linked_list{
    //......................
public:
Node* head;
Single_Linked_list(){
    
    head=NULL;
}
//..................................
Single_Linked_list(Node* N)
{
    head=N;
}

//................................................Node Exist function...........

Node* Node_exist(int k){
Node* temp;
Node* ptr=head;
if(ptr==NULL){
    
   // cout<<" no element is there\n";
    return NULL;
    }
    
while(ptr!=NULL){
    if(ptr->key==k){
        return temp;
    }
    ptr=ptr->next;
    if(ptr==NULL) return NULL;
}

}
//........................................Append function to add the node.........
void Appen_node(Node * N){
    
    if(Node_exist(N->key)!=NULL){
        cout<<"node already Exist"<<" append other Node\n";
    }
    else{
        if(head==NULL) head=N;
        Node * temp=head;
    
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=N;
        
    }
}
//................................Pre_pend function................................
Node* Pre_pend(Node * N){
    if(Node_exist(N->key)!=NULL) {
        cout<<" node exit";
        return NULL;
        }
        

else{
    Node * temp=head;
    N->next=head;
    head=temp;
    return head;
}
}
 //..............................insert the node function....................;
 void insert_node_after(int k,Node *N){
     Node* ptr;
     ptr=Node_exist(k);
     if(ptr==NULL) cout<<"node not exit";
     N->next=ptr;
     ptr=N;
     cout<<"node insterted\n";
     
     }
//...................................deleting_Node function..................;
 void deleting_Node(int k){
     
     if(head==NULL) cout<<"can not deleted no linked list\n";
     Node * temp=Node_exist(k);
     if(temp==NULL)cout<<"node not exist\n";
     
     if(temp->key==k) head=head->next;
     Node* temp1;
     while(temp->key!=k){
        temp1 =temp;
         temp=temp->next;
     }
     temp1=temp->next;
     free(temp);
 }
 
 //....................................updating order by key................;
    
    void updata_node(int k,int d){
        
        Node* temp=Node_exist(k);
        if(temp==NULL) cout<<"node to be deleted\n";
       temp->key=d;        
    }
    
    
//....................................printing teh linked list...............;
     void   printing(){
  Node *temp=head;
          cout<<"head->[";
        while(temp!=NULL){
            
            cout<<"[Key ["<<temp->key<<"] data ["<<temp->data<<"] ]\t-> ";
            temp=temp->next;
        }
                  
     }
    
 //.................................................end..........................;   
};


int main(){
    Single_Linked_list S;
    int key1,data1;
    cin>>key1>>data1;
Node * n1=new Node();
n1->key=key1;
n1->data=data1;
S.Appen_node(n1);
    /*int n;
    cin>>n;
    for(int i=0;i<n;i++)
{
    int key1,data1;
    cin>>key1>>data1;
Node * n1=new Node();
n1->key=key1;
n1->data=data1;
S.Appen_node(n1);
}
**/
S.printing();
    
    
}
