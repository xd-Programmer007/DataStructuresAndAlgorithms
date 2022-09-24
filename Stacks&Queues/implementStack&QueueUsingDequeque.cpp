#include<bits/stdc++.h>
using namespace std;
 
struct DQueNode{
    int value;
    DQueNode * next;
    DQueNode * prev;
};

class Deque{
    private:
        DQueNode* head;
        DQueNode* tail;
    public:
        Deque()
        {
            head = tail = NULL;
        }
        bool isEmpty(){
            if(head==NULL)
                return true;
            return false;
        }
        int size(){
            if(!isEmpty()){
                DQueNode* temp = head;
                int len = 0;
                while(temp!=NULL){
                    len++;
                    temp = temp->next;
                }
                return len;
            }
            return 0;
        }
        void insert_first(int element){
            DQueNode* temp =  new DQueNode[sizeof(DQueNode)];
            temp->value = element;

            if(head==NULL){
                head=tail =temp;
                temp->next = temp->prev =NULL;
            }
            else{
                head->prev = temp;
                temp->next= head;
                temp->prev=NULL;
                head=temp;
            }
        }
        void insert_last(int element){
            DQueNode* temp = new DQueNode[sizeof(DQueNode)];
            temp->value = element;
            if(head==NULL){
                head=tail=temp;
                temp->next = temp->prev =NULL;
            }
            else{
                tail->next = temp;
                temp->prev = tail;
                temp->next =NULL;
                tail =temp;
            }
        }

        void remove_first()
        {
            if(!isEmpty()){
                DQueNode* temp = head;
                head = head->next;
                if(head)head->prev = NULL;
                delete temp;
                if(head==NULL)tail =NULL;
                return ;
            }
            cout<<"List is Empty"<<endl;
        }

        void remove_last()
        {
            if(!isEmpty()){
                DQueNode* temp = tail;
                tail = tail->prev;
                if(tail)tail->next=NULL;
                delete temp;
                if(tail==NULL)head=NULL;
                return ;
            }
            cout<<"List is Empty"<<endl;
        }
        
        void display()
        {
            if(!isEmpty()){
                DQueNode* temp = head;
                while(temp!=NULL){
                    cout<<temp->value<<" ";
                    temp = temp->next;
                }
                cout<<endl;
                return;
            }
            cout<<"List is Empty"<<endl;
        }
};
 
class Stack :public Deque{
    public:
        void push(int element){
            insert_last(element);
        }
        void pop(){
            remove_last();
        }
};

class Queue:public Deque{
    public:
        void enqueue(int element){
            insert_last(element);
        }
        void dequeue()
        {
            remove_first();
        }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.display();
    cout<<endl;
    st.pop();
    st.display();
    cout<<endl;
    Queue q;
    q.enqueue(30);
    q.enqueue(60);
    q.display();
    cout<<endl;
    q.dequeue();
    q.display();
    return 0;
}



















