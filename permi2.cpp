#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<vector<int> > v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << "[";
      for(int j = 0; j <v[i].size(); j++){
         cout << v[i][j] << ", ";
      }
      cout << "],";
   }
   cout << "]"<<endl;
}
class Solution {
public:
   vector < vector <int> > res;
   void solve(vector <int> nums, int idx = 0){
      if(idx == nums.size()){
         res.push_back(nums);
         return;
      }
      for(int i = idx; i <nums.size(); i++){
         if(nums[i] == nums[idx] && i != idx)continue;
         swap(nums[i], nums[idx]);
         solve(nums, idx + 1);
      }
   }
   vector<vector<int>> permuteUnique(vector<int>& nums) {
      res.clear();
      sort(nums.begin(), nums.end());
      solve(nums);
      return res;
   }
};
int main(){
   Solution ob;
   vector<int> v = {1,1,3};
   print_vector(ob.permuteUnique(v));
   return 0;
    
}
