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
    int arr[]={1,2,3,4,5};
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
        }
    }
}
}