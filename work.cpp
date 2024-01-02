#include <bits/stdc++.h>
using namespace std;

struct DQueNode{
    int value;
    DQueNode *prev;
    DQueNode *next;
};


class Deque{
    private:
    DQueNode *head;
    DQueNode *tail;

    public:
    Deque(){
        head=tail=NULL;
    }
    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        return false;
    }

    int size(){
        if(isEmpty()){
            DQueNode *temp=head;
            int len=0;
            while(temp!=NULL){
                len++;
                temp=temp->next;
            }
            return len;
        }
        return 0;
    }

    void insertFirst(int element){
        DQueNode* temp = new DQueNode[sizeof(DQueNode)];
        temp->value = element;

        if(head==NULL){
            head=tail=temp;
            tail->prev=tail->next=NULL;
        }
        else{
            head->prev=temp;
            temp->next=head;
            temp->prev=NULL;
            head=temp;
        }
    }

    void insertLast(int element){
        DQueNode* temp = new DQueNode[sizeof(DQueNode)];
        temp->value=element;
        if(head==NULL){
            head=tail=temp;
            tail->prev=tail->next=NULL;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            temp->next=NULL;
            tail=temp;
        }
    }

    void removeFirst(){
        if(!isEmpty()){
            DQueNode* temp = head;
            head=head->next;
            if(head){
                head->prev=NULL;
            }
            delete temp;
            if(head==NULL){
                tail=NULL;
            }
            return;
        }
    }

    void removeLast()
    {
        // if list is not empty
        if (!isEmpty()) {
            DQueNode* temp = tail;
            tail = tail->prev;
            if(tail) tail->next = NULL;
            delete temp;
            if(tail == NULL) head = NULL;
            return;
        }
        cout << "List is Empty" << endl;
    }

    void display()
    {
        // if list is not empty
        if (!isEmpty()) {
            DQueNode* temp = head;
            while (temp != NULL) {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
            return;
        }
        cout << "List is Empty" << endl;
    }
 
};

class Stack : public Deque {
public:

    void push(int element)
    {
        insertLast(element);
    }
    void pop()
    {
        removeLast();
    }
};