#include<iostream>
using namespace std;

int main()
{
    int n = 7;
    int number_ = 1;
    int number_temp = 1;
    int nums[n] = {-1,-2,-3,4,1,2,3};
    int left[n];
    int right[n];
    int result[n];
    int i;
    for(i = 0; i < n; i++)
    {
            number_ *= nums[i];
            left[i] = number_;
            number_temp *= nums[n-1-i];
            right[n-1-i] = number_temp;
    }
    
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            result[i] = 1 * right[i+1];
        }
        if(i == n-1)
        {
            result[i] = left[i-1] * 1;
        }
        if(i >= 1 && i <= n-2)
        {
            result[i] = left[i-1] * right[i+1];
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }

}