/*
Given an unsorted array of positive integers. Find the number of triangles that can be formed with three different array elements as lengths of three sides of triangles. 

Input: 
The first line of the input contains T denoting the number of test cases. The first line of each test case contains an integer represents N and the second line contains N space-separated integers.

Output:
For each test case, print the number of possible triangles in a separate line.

Constraints:
1 <= T <= 10
3 <= N <= 103
1 <= arr[i] <= 105

Example:
Input:
2
3
3 5 4
5
6 4 9 7 8

Output:
1
10*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int arr[100000];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    int count=0,k;
	    sort(arr,arr+N);
	    for(int i=0;i<N-2;i++)
	    {
	      int k=i+2;
	      for(int j=i+1;j<N;j++)
	      {
	         while(k<N && arr[i]+arr[j]>arr[k])
	         {
	             k++;
	         }
	         count+=k-j-1;
	      }
	          
	    }
	    cout<<count<<endl;
	}
	return 0;
}