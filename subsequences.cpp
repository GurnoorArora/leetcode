#include<iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>>&ans,int arr[],vector<int>&ds,int index,int n)
{
    if(index==n)
    {
        ans.push_back(ds);
        return;
    }
    else
    {
        ds.push_back(arr[index]);
        solve(ans,arr,ds,index+1,n);
        ds.pop_back();
        solve(ans,arr,ds,index+1,n);
    
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    vector<int> ds;
    vector<vector<int>> ans;
    solve(ans,arr,ds,0,5); 
    //building a function to print all the values 

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
        cout<<ans[i][j];
        }
        cout<<endl;
    } 
}
