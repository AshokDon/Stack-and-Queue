#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int *arr;
    int cap,size;
    Queue(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    bool isfull()
    {
        return size==cap;
    }
    bool isempty()
    {
        return size==0;
    }
    void enque(int x)
    {
        if(isfull())
        {
            return;
        }
        arr[size]=x;
        size++;
    }
    void deque()
    {
        if(isempty())
        {
            return;
        }
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
            
        }
        size--;
    }
    int getfront()
    {
        if(isempty())
        {
            return -1;
        }
        return 0;
    }
    int getrare()
    {
        if(isempty())
        {
            return -1;
        }
        return arr[size-1];
    }
    
};

int main() {
	Queue qu(5);
	qu.enque(10);
	qu.enque(8);
	cout<<qu.getrare();
	
	return 0;
}