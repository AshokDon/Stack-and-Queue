//https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s; 
	    stack<char>st;
	    int fl=1;
	    for(auto it:s)
	    {
	        if(it =='[' || it=='{' || it=='(')
	        {
	            st.push(it);
	        }
	        else{
	            if(it==']' && !st.empty() && st.top()=='[')
	            {
	                st.pop();
	            }
	            else if(it=='}' && !st.empty() && st.top()=='{')
	            {
	                st.pop();
	            }
	            else if(it==')' && !st.empty() && st.top()=='(')
	            {
	                st.pop();
	            }
	            else{
	                fl=0;
	            }
	        }
	    }
	    if(st.size()!=0 || fl==0)
	    {
	        cout<<"No";
	    }
	    else{
	        cout<<"Yes";
	    }
	}
	return 0;
}
