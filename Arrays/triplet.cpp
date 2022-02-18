class Solution{
public:
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            int s=A[i];
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(A[j]+A[k]==X-s)
                    return 1;
                else if(A[j]+A[k]<X-s)
                    j++;
                else
                    k--;
            }
   }
   return 0; 

   

    }

};
