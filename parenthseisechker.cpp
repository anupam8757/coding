/*
Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”

Input:
The first line of input contains an integer T denoting the number of test cases.  Each test case consists of a string of expression, in a separate line.

Output:
Print 'balanced' without quotes if the pair of parenthesis is balanced else print 'not balanced' in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ |s| ≤ 105

Example:
Input:
3
{([])}
()
([]

Output:
balanced
balanced
not balanced */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isbalanced(string str)
    {
        stack<char> st;
        char x;
	    int l=str.length();
	    for(int i=0;i<l;i++)
	    {
	        if(str[i]=='[' || str[i]=='{'  || str[i] == '(')
	        {
	           st.push(str[i]); 
	           continue;
	        }
	        if(st.empty())
	        {
	            return false;
	        }
	       switch(str[i])
	       {
	           case ')' :
	                        x=st.top();
	                        st.pop();
	                        if(x=='{' ||  x=='[')
	                        return false;
	                        break;
	            case '}' :
	                        x=st.top();
	                        st.pop();
	                        if(x=='(' ||  x=='[')
	                        return false;
	                        break;
	             case ']' :
	                        x=st.top();
	                        st.pop();
	                        if(x=='{' ||  x=='(')
	                        return false;
	                        break;             
	       }
	        
	    } 
	    return st.empty();
    }
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	   if(isbalanced(str))
	   cout<<"balanced"<<endl;
	   else
	   cout<<"not balanced"<<endl;
	 }
	return 0;
}