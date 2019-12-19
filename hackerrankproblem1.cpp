/*Given a 2D Array, :
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
We define an hourglass in to be a subset of values with indices falling in this pattern in 's graphical
representation:
a b c
d
e f g
There are hourglasses in , and an hourglass sum is the sum of an hourglass' values.
Task
Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum.
Input Format
There are lines of input, where each line contains space-separated integers describing 2D Array ;
every value in will be in the inclusive range of to .
Constraints
Output Format
Print the largest (maximum) hourglass sum found in .
Sample Input
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
Sample Output
19*/
#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int k=0,sum[16];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
                sum[k]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                k++;
        }
    }
    int result=sum[0];
    for(k=1;k<16;k++)
    {
        if(sum[k]>result)
        result=sum[k];
    }
    cout<<result;
    return 0;
}
