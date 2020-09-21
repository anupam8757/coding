/*
Reverse words in a given string 
Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. T testcases follow. Each case contains a string S containing characters.

Output:
For each test case, in a new line, output a single line containing the reversed String.

Constraints:
1 <= T <= 100
1 <= |S| <= 2000

Example:
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr  */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    stack<string> st;
    string temp="";
    for(int i=0;i<str.length();i++)
    {
     if(str[i]!='.')
     temp+=str[i];
     else
     {
         st.push(temp);
         temp="";
     }
    }
    st.push(temp);
    while(!st.empty())
    {
        cout<<st.top();
        if(st.size()>1)
        cout<<".";
        st.pop();
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    reverse(str);
	    cout<<endl;
	}
	return 0;
}