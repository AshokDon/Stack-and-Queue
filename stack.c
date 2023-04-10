#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <limits.h>
//using namespace std;
typedef long long ll;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN
int MyStack[STACK_LENGTH];
int top = EMPTY;
int Push(int val){
    if(top >= STACK_LENGTH-1)return 0;
    top++;
    MyStack[top]=val;
    return 1;
}
int pop(){
    if(top==EMPTY)return STACK_EMPTY;
    int res = MyStack[top];
    top--;
    return res;
}
int Isempty(){
    if(top==EMPTY)return 1;
    return 0;
}
int size(){
    return top+1;
}
int Top(){
    if(top==EMPTY)return STACK_EMPTY;
    return MyStack[top];
}
int main(){
    TakeInput();
    Push(10);
    Push(100);
    Push(200);
    Push(300);
    while(!Isempty()){
        int t = pop();
        printf("%d ",t);

    }

}



