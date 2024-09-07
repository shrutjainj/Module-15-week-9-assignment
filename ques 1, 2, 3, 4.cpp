/* 1 2 
   2 3 
   3 4 */
#include<iostream>
using namespace std; 
int main()
{
    int arr[] = {2,5,8,9,4};
    for(int i=0; i<5; i++)
    {
        for(int j = i+1 ; j < 5 ; j++)
        {
            if(arr[j]>arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}