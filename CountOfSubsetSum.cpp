#include <bits/stdc++.h>

using namespace std;

int CountSubsetSum(vector<int> &nums, int sum, int n){
        int subset[n+1][sum+1];
        for(int i=0;i<=sum;i++)
            subset[0][i] = 0;
        for(int i=0;i<=n;i++)
            subset[i][0] = 1;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j){
                    subset[i][j] = subset[i-1][j-nums[i-1]] + subset[i-1][j];
                }
                else
                    subset[i][j] = subset[i-1][j];
            }
        }
        return subset[n][sum];
    }

int main(){
    
    vector<int> arr = {1,2,3,3};

    cout<<CountSubsetSum(arr,6,4)<<endl;

    return 0;
}