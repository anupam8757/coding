
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;

    int  arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  /*  int ans=0,sum;
    for(int i=0;i<n;i++) // O(n*n*n)
    {
        for(int j=i;j<n;j++)
        {   
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            ans=max(ans,sum);
              
        }
      
    }
    cout<<ans<<endl;  */


  //  sum of maximum subarray in o(n2)
 /* int ans=0,sum;
    for(int i=0;i<n;i++) // O(n*n)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {   
             sum+=arr[j];
        }
      ans=max(ans,sum);
    }
    cout<<ans<<endl;*/

    // Kadane Algoritm
    int csum=0,max_sum=arr[0];
    for(int i=0;i<n;i++)
    {
        csum+=arr[i];
        if(csum<0)
         csum=0;
         max_sum=max(max_sum,csum);
    }
    cout<<max_sum<<endl;
	return 0;
}

