#include <iostream>
#include <stack>
using namespace std;
void reverse_stack(stack<int> &s){
    int n = s.size();
    stack<int>s1;
    while(n>0){
        int temp = s.top();
        s.pop();
        while(!s.empty()){
            s1.push(s.top());
            s.pop();
        }
        s.push(temp);
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
        n--;
    }

}
int main()
{   int n;
    stack<int> s1;
    cout<<"Enter the number of inputs: ";
    cin>>n;
    int data;
    for(int i =0;i<n;i++){
            cin>>data;
            s1.push(data);
    }
    reverse_stack(s1);
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}
