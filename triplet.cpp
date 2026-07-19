#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<3)
    {
        cout<<"atleast 3 elemnts required";
        return 0;
    }
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    int min1=INT_MAX, min2= INT_MAX ;
    int max1 = INT_MIN, max2=INT_MIN, max3=INT_MIN;
    for(int i=0;i<n;i++)
    {
    

        
               if(arr[i]<min1)
               {
               
                min2 = min1; 
                min1 = arr[i];
               }
               else if(arr[i]<min2)
               {
                min2= arr[i];
               }
        
      
        
            if(arr[i]>max1)
            {
                max3=max2;
                 max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>max2)
            {    
                max3=max2;
                max2=arr[i];
               
            }
            else if(arr[i]>max3)
            {
                max3=arr[i];
            }
        } 
        int prod1 = min1*min2*max1;
        int prod2 = max1*max2*max3;
        int prod = max(prod1,prod2);
        cout<<"max product triplet"<<prod;
    return 0;
}
