class Solution
{
public:
    void solve(vector<int>&arr,vector<int>&ans,vector<int>&ds,int i,int sum,int N)
    {
        if(i==N)
        {
            ans.push_back(sum);
            return;
        }
        ds.push_back(arr[i]);
        sum=sum+arr[i];
        solve(arr,ans,ds,i+1,sum,N);
        ds.pop_back();
        sum=sum-arr[i];
        solve(arr,ans,ds,i+1,sum,N);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        vector<int> ds;
        int sum=0;
        solve(arr,ans,ds,0,sum,N);
        return ans;
    }
};
