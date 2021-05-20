//https://leetcode.com/problems/next-greater-element-i/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int neg[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	stack<int>st;
	for(int i=n-1;i<=0;i--)
	{
	    //through out all the elements less the equal to a[i]
	    while(!st.empty() && st.top<=a[i])
	    {
	        st.pop();
	    }
	    if(!st.empty())
	    {
	        neg[i]=st.top();
	    }
	    else{
	        neg[i]=-1;
	    }
	    st.push(a[i]);
	    
	}
	for(auto it:neg)
	{
	    cout<<it<<" ";
	}
	return 0;
}
