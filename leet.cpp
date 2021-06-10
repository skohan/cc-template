#include <iostream>
#include <bits/stdc++.h>
#include <semaphore.h>
 
using namespace std;
 
#define ull unsigned long long
#define ll long long
#define nl "\n"
#define INTBITS 32
#define kickstartoutput cout << "Case #" << tc <<": " 
const int mod = 1000000007;
 
int smalla = 97;
int biga = 65;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> ans;
        
        if(nums.size() < 3)
            return {};
        
        unordered_map<int,int> um;
        for(int x:nums)
            um[x]++;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            int a = nums[i];
            um[a]--;
            for(int j = i+1; j < nums.size(); j++)
            {

                int b = nums[j];
                um[b]--;

                int c = -1*(a+b);

                if(um[c])
                {
                    vector<int> tmp = {a,b,c};
                    sort(tmp.begin(), tmp.end());
                    ans.insert(tmp);
                }
                
                // um[a]++;
            }
            for(int j = i+1; j < nums.size(); j++)
                um[nums[i]]++;
        }
        
        
        vector<vector<int>> ans_real(ans.begin(), ans.end());
        return ans_real;
    }
};
 
int main(){

    return 0;
}
  
