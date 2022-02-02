Class Solution
{
    public:  
       
       bool present_in(int ele,int arr[],int n)
       {
           int i=0,j=n;
           while(i<=j)
           {
               
               int mid=(i+j)/2;
               if(arr[mid]==ele)
               {
                   return true;
               }
               else if(arr[mid]>ele)
               {
                   j=mid-1;
               }
               else
               {
                   i=mid+1;
               }
           }
           return false;
       }
    
    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            if(n1<=n2 && n1<=n3)
            {
            
                for(int i=0;i<n1;i++)
                {
                    int ele=A[i];
                    if(present_in(ele,B,n2) && present_in(ele,C,n3))
                    {
                        if(ans.size()>0 && ans[ans.size()-1]==ele)
                        {
                            continue;
                        }
                        ans.push_back(ele);
                    }
                }
            }
            else if(n2<=n1 && n2<=n3)
            {
                for(int i=0;i<n2;i++)
                {
                    int ele=B[i];
                    if(present_in(ele,A,n1) && present_in(ele,C,n3))
                    {
                        if(ans.size()>0 && ans[ans.size()-1]==ele)
                        {
                            continue;
                        }
                            ans.push_back(ele);
                    }
                }
            }
            else if(n3<=n2 && n3<=n1)
            {
                for(int i=0;i<n3;i++)
                {
                    int ele=C[i];
                    if(present_in(ele,B,n2) && present_in(ele,A,n1))
                    {
                        if(ans.size()>0 && ans[ans.size()-1]==ele)
                        {
                            continue;
                        }
                        ans.push_back(ele);
                    }
                }
            }
            
            return ans;
            
        }
        

};
