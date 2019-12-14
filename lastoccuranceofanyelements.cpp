//given a sorted array we have to find last occurance of any particular elemnts
#include <iostream>
using namespace std;
int main() {
    int n;
    int a[50];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    int i=0,j=n-1,mid=0,ans=-1;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(a[mid]==key)
        {
        ans=mid;
        i=mid+1;
        }
        else if(a[mid]<key)
        i=mid+1;
        else
        j=mid-1;
    }
    if(ans==-1)
        cout<<"elements is not present in the array\n";
    else
     cout<<"First Occurance...."<<key<<"is at index"<<ans;
}
