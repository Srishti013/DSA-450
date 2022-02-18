class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    if(ans.empty() || ans[ans.size()-1]!=A[i])
                        ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]>=B[j] && A[i]>=C[k])
                {
                    if(A[i]!=B[j])
                        j++;
                    if(A[i]!=C[k])
                        k++;
                }
                else if(A[i]<=B[j] && B[j]>=C[k])
                {
                    if(A[i]!=B[j])
                        i++;
                    if(B[j]!=C[k])
                        k++;
                }
                else
                {
                    if(C[k]!=A[i])
                        i++;
                    if(C[k]!=B[j])
                        j++;
                }
            }
            if(ans.empty())
                ans.push_back(-1);
            return ans;
        }

};
