#include<iostream>
#include<cstdlib>
using namespace std;
class node{
    public:
        int data;
        node *next;
};

class list{
    public:
        list(){
            first=NULL;
            size=0;
        }
        void pushAt(int index, int _data){
            if(index == 0){
                pushFront(_data);
            }
            else{
                node *before = first;
                for(int i=1;i<index;++i){
                    before = before ->next;
                }
                push(before,_data);
            }
        }
        void pushFront(int _data){
                node *p=new node;
                p->data = _data;
                p->next = first;
                first=p;
                size++;
        }
        void printOut(){
            node *p=first;
            while(p!=NULL){
                cout<<p->data<<"->";
                p=p->next;

            }
            cout<<"NULL"<<endl;
        }
        bool isEmpty() const {
            return size==0;
        }
    protected:
        void push(node *before,int _data){
            node *p = new node;
            p->data = _data;
            p->next = before->next;
            before->next=p;
            size++;

        }
        node *first;
        int size;
};

int main()
{
    list myList;
    myList.pushFront(1);
    myList.pushFront(2);
    myList.pushFront(3);
    myList.pushFront(4);
    myList.pushFront(5);

    myList.pushAt(2,100);
    myList.printOut();


    

}

