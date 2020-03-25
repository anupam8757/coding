#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
    int n,i=0;
    cout<<"enter a decimal number\n";
    cin>>n;
    int oct[10];
    while(n!=0)
    {
        oct[i]=n%8;
        n=n/8;
        i++;
    }
    cout<<"octal eqivalent is....\n";
    for(int j=i-1;j>=0;j--)
    cout<<oct[j];
}
