#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 5, 4};
    int n = 4;
    bool Flag = false;
    for(int i=0; i<3; i++)
    {
        for(int j= i+1; j<3; j++)
        {
            if(arr[i]<=arr[j])
            {
                Flag = true;
            }
            else
            {
                Flag = false;
            }
        }
    }
    if(arr[n-1]> arr[n-2])
    {
        Flag = false;
    }
    if(Flag == true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"False";
    }
}