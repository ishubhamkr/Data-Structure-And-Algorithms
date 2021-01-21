#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,i,j,z;
    int arr[n];
    int brr[n];
    cout<<"Enter Size of an array: ";
    cin>>n;
    cout<<"\n Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter number of times array to be rotated: ";
    cin>>s;
    for(j=0;j<n;j++)
    {
        z=(j+s)%n;
        brr[j]=arr[z];
    }
    cout<<"\n Array after rotation: ";
    for(i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
}
