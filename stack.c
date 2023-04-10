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
//2nd method using struct
/*  /////////////////////////////////////////////////////////////////////. */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void TakeInput(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
struct Stack{
	int *arr;
	int top;
	int cap;
};
typedef struct Stack stack;
//creat an stack with given capacity
stack *Creat_A_Stack(int capacity){
	stack *ss = (stack*)malloc(sizeof(stack));
	ss->cap = capacity;
	ss->top = -1;
	ss->arr=(int*)malloc(ss->cap * sizeof(int));
	return ss;
}
//to add an give data into stack
void Push(struct Stack *S, int val){
	if(S->top == S->cap-1)return;
	S->top++;
	S->arr[S->top]=val;
}

int pop(stack *s1){
	if(s1->top==-1){
		printf("stack is empty");
		return 0;
	}
	int res = s1->arr[s1->top];
	s1->top--;
	return res;

}
int Top(stack *s1){
	if(s1->top==-1){
		printf("stack is empty");
		return 0;
	}
	int res = s1->arr[s1->top];
	
	return res;

}
int empty(stack *s1){
	return s1->top==-1;
}
void Display(stack *s1){
	while(!empty(s1)){
		printf("%d\n",s1->arr[s1->top]);
		s1->top--;
	}
}
int main(){
	TakeInput();
	stack *s1 = Creat_A_Stack(5);
	Push(s1,10);
	Push(s1,20);
	Push(s1,30);
	//pop(s1);//-->s1 top delet
	Top(s1);// -->s1 top return 
//size(s1);// s1 size
	Display(s1);//print all data in s1
	stack *s2 = Creat_A_Stack(5);
}














