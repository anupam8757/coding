#include <iostream>
#include<stack>
using namespace std;
void stockSpan(int a[],int n){
    stack<int>s;
    int coun[n] = {0};
    for(int i = 1;i<n;i++){
        while(s.empty() == false && a[s.top()]<a[i]){
            s.pop();
        }
        int span = s.empty() ? i+1 : i - s.top();
        coun[i] = span;
        s.push(i);
    }
    coun[0] = 1;
    for(int i=0;i<n;i++){
        cout<< coun[i]<<" ";
    }cout<<"END"<<endl;
}
int main()
{   int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stockSpan(arr,n);
    return 0;
}
