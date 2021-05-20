#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	stack<int>st;
	int len=0;
	st.push(0);
	for(int i=1;i<=n;i++)
	{
	    if(a[i]>0)
	    {
	        st.push(i);
	        continue;
	    }
	    if(st.top()==-1*(a[i]))
	    {
	        st.pop();
	        len=max(len,i-st.top());
	    }
	    else{
	        st.push(i);
	    }
	}
	cout<<len<<"\n";
	return 0;
}