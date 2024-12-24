#include<iostream>
using namespace std;
int getUnique(int arr[],int n)
{
   int ans=0;
   for(int i=0;i<n;i++)
   {
    ans=ans^arr[i];

   }
   return ans; 
}

int main()
{
    int arr[]={10,20,30,40};
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i]<<","<<arr[j]<<" "<<endl;
        }
    }
}