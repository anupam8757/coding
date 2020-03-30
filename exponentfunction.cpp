/* exponent function
 a raise b  in logn time */

#include <iostream>
using namespace std;
int power(int a,int n)
{
int ans=1;
while(n>0)
{
    int last_bit=(n&1);
    if(last_bit)
    ans=ans*a;
    a=a*a;
    n=n>>1;
}
return ans;
}
int main() {
    cout<<"Hello World!\n enter first number and its power to compute";
    int a,b;
    cin>>a>>b;
    cout<<"power of " <<a<<"power"<<b <<" is "<<power(a,b);
    return 0;

}
