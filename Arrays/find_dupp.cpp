// Naive Solution

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> ans(n,0),a;
        for(int i=0;i<n;i++)
        {
            ans[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]>1)
            {
               a.push_back(i);
            }
        }
        if(a.empty())
            a.push_back(-1);
        return a;
    }
};


// Optimized

lass Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n] +=n;
            cout<<arr[i]%n<<"\n";
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]/n>1)
            {
                ans.push_back(i);
            }
        }
        if(ans.empty())
            ans.push_back(-1);
        return ans;
    }
};
