/* A neon number is a number where the sum of digits of square of the number is equal to the number.
For example if the input number is 9, its square is 9*9 = 81 and sum of the digits is 9. i.e. 9 is a neon number.
*/
#include <iostream>
using namespace std;
int main() {
    int num,square;
    cout<<"Hello World! \n Enter a Number to check wether to check Neon\n";
    cin>>num;
    square=num*num;
    int sum=0;
    while(square>0)
    {
        sum=sum+square%10;
        square=square/10;
    }
    if(num==sum)
    cout<<"Entered Number is Neon Number";
    else
    cout<<"Entered Number is not Neon Number";
    return 0;
}
