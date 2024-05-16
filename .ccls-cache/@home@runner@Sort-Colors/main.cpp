#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Given an array nums with n objects colored red, white, or blue, sort them in-place so that

  
  vector<int> nums{2,1};

  
  int start = 0;
  int end = nums.size()-1;
  int i = 0;

  while(i<=end)
    {
      if(nums[i] == 0)
      {
        swap(nums[i],nums[start]);
        i++;
        start++;
      }
      else if(nums[i] == 2)
      {
        swap(nums[i],nums[end]);
        end--;
      }
      else
      {
        i++;
      }

    }
  for(int i = 0 ; i < nums.size() ; i++)
    {
      cout << " " << nums[i];
    }

  cout << endl;

}