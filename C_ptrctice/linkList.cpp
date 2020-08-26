#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int main(){
    node *first,*cur,*pre;
    
    cout<<"Input number of node:"<<endl;
    int i,data,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        cout<<"Input data:"<<endl;
        cur=(node *)malloc(sizeof(node));
        scanf("%d",&cur->data);
        if(i==0){
            first=cur;
        }

        else
            pre->next=cur;
        pre=cur;
        cur->next=NULL;
    }
    cur=first;
    while(cur!=NULL){
        cout<<"data= "<<cur->data<<endl;
        cur=cur->next;
    }




}
