#include <iostream>
#include "Node.h"

using namespace std;

void print(Node* hash[])
{
    for(int i=0 ; i<10 ; i++)
    {
        Node* temp=hash[i];
        
        while(temp->next!=NULL)
        {
            cout<<temp->next->num<<" ";
            temp=temp->next;
        }
        
        cout<<endl;
    }
}

int main()
{
    int arr_nums[10]={1,4,7,1,5,2,4,1,3,5};
    Node* hash[10];
    int index;
    Node* temp;
    
    for(int i=0 ; i<10 ; i++)
    {
        hash[i]=new Node;
    }
    
    for(int i=0 ; i<10 ; i++)
    {
        index=arr_nums[i]%10;
        temp=hash[index];
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        
        temp->next=new Node;
        temp->next->num=arr_nums[i];
        temp->next->next=NULL;
        
        
       
    }
    print(hash);
}
