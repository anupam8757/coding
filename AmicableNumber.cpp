/*  either of a pair of numbers each of which equals the sum of the different exact divisors of the other excluding the number itself
NOTE: 220 and 284 are examples of amicable numbers. The factors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110, which sum to 284, while the factors of 284 are 1, 2, 4, 71, and 142, which sum to 220.
*/


#include <iostream>
using namespace std;
int sumofdivisor(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    return sum;
}
int main() {
    cout<<"Hello World! Enter Two number to check Amicable Number\n";
    int num1,num2,sum1=0,sum2=0;
    cin>>num1>>num2;
    sum1=sumofdivisor(num2);
    cout<<sum1<<endl;
     sum2=sumofdivisor(num1);
    cout<<sum2<<endl;
    if((sum1==num1) && (sum2==num2))
    cout<<"Entered pairs Amicable Number";
    else
    cout<<"Given pAIR IS Not Amicable Number";
    return 0;
}
