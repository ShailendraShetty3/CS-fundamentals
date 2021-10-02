//Fibonacci Series using Dynamic Programming 
#include<stdio.h> 

int fib(int n) 
{ 

int f[n+2]; // 1 extra to handle case, n = 0 
int i; 


f[0] = 0; 
f[1] = 1; 

for (i = 2; i <= n; i++) 
{ 

	f[i] = f[i-1] + f[i-2]; 
} 

return f[n]; 
} 

int main () 
{ 
int n = 9; 

return 0; 
} 

//circular ll
#include <iostream>

using namespace std;
struct node{
    int data;
    node* next;
};
void InsertFront(node** tail,int i){
    node* temp=new node;
    temp->data=i;
    if(*tail==NULL){
        *tail=temp;
        (*tail)->next=*tail;
        return;
    }
    temp->next=(*tail)->next;
    (*tail)->next=temp;
    return;
}
void InsertEnd(node** tail,int i){
    node* temp=new node;
    temp->data=i;
    if(*tail==NULL){
        *tail=temp;
        (*tail)->next=*tail;
        return;
    }
    temp->next=(*tail)->next;
    (*tail)->next=temp;
    (*tail)=temp;
    return;
}
void DeleteFront(node** tail){
    node* temp=*tail;
    node* temp1=*tail;
    temp=(temp->next)->next;
    temp1=(*tail)->next;
    delete(temp1);
    temp1=NULL;
    (*tail)->next=temp;
}
void DeleteEnd(node** tail){
    node* temp=*tail;
    node* temp1;
    do{
        temp1=temp;
        temp=temp->next;
    }while(temp->next!= (*tail)->next);
    temp1->next=(*tail)->next;
    delete(temp);
    temp=NULL;
    *tail=temp1;
}
void Display(node* tail){
    node* temp=tail;
    do{
         temp=temp->next;
        cout<<temp->data<<" ";
       
    }while(temp->next!=tail->next);
    cout<<endl;
}

int main()
{
    node* tail=NULL;
    for(int i=0;i<10;i++){
        InsertFront(&tail,i);
    }
    Display(tail);
    tail=NULL;
    for(int i=0;i<10;i++){
        InsertEnd(&tail,i);
    }
    Display(tail);
     int i=0;
    while(i!=4){
    DeleteEnd(&tail);
    i++;
    }
    Display(tail);
    i=0;
    while(i!=2){
    DeleteFront(&tail);
    i++;
    }
    Display(tail);
   
   
    return 0;
}
void subsets(char *a,int i,int j,char *temp){
    if(a[i]=='\0'){
        temp[j]='\0';
        cout<<temp<<endl;
        return;
    }
    
    temp[j]=a[i];
    subsets(a,i+1,j+1,temp);
    subsets(a,i+1,j,temp);
}

int main()
{
    char a[100];
    cin>>a;
    char temp[100];
    subsets(a,0,0,temp);

    return 0;
}
