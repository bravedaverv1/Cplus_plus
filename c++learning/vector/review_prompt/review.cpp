#include <iostream> 
#include <vector>

// ? PROMPT:
// using a for loop
// add the evens together and display the total.
// multiply the odds and display the sum

int main(){
  int evens_sum = 0;
  int odds_sum = 1;

  std::vector<int> nums = {2, 4, 3, 6, 1, 9};

  for(int i = 0; i < nums.size(); i++){
    if(nums[i] % 2 == 0){
      evens_sum += nums[i];
    } else{
      odds_sum = odds_sum * nums[i];
    }
  }
  std::cout << evens_sum << std::endl;
  std::cout << odds_sum << std::endl;
}