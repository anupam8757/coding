#include <iostream>
#include <stack>
using namespace std;
void histArea(int a[],int n){
    stack<int> s;
    int area = 0,maxx = 0,i=0,curMax;
    while(i<n){
        if(s.empty() || a[s.top()]<=a[i] ){
            s.push(i++);
        }
        else{
            curMax = s.top();
            s.pop();
            area = a[curMax] * (s.empty() ? i : (i-1-s.top()));
            maxx = maxx<area ? area : maxx;
        }
    }
        while(s.empty()  == false){
            curMax = s.top();
            s.pop();
            area = a[curMax] * (s.empty() ? i : (i-1-s.top()));
            maxx = maxx<area ? area : maxx;
        }
    cout<<maxx;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    histArea(arr,n);
    return 0;
}
