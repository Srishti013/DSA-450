void segregateElements(int arr[],int n)
    {
        int c_p=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
           if(arr[i]>0)
               c_p++;
        }
        int neg=c_p;
        c_p=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                ans[neg++]=arr[i];
            }
            else
                ans[c_p++]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=ans[i];
        }
    }
