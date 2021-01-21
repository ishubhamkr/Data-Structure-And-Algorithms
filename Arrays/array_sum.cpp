#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum,i,j;
    int arr[n];
    cin>>n;
    sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        sum=arr[j]+sum;
    }
    cout<<sum;
}
