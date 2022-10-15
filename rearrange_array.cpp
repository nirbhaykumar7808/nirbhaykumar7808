#include <iostream>
using namespace std;
 
void rearrange_max_min(int nums[], int n)
{
    int temp[n];
    int small_num=0, large_num=n-1;
    int result = true;
 
    for (int i=0; i<n; i++)
    {
        if (result)
            temp[i] = nums[large_num--];
        else
            temp[i] = nums[small_num++];
 
        result = !result;
    }
 
     for (int i=0; i<n; i++)
        nums[i] = temp[i];
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10}; 
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    rearrange_max_min(nums, n);
 
    printf("\nArray elements after rearranging: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
     
}
