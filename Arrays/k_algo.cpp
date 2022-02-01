class Solution{
public:
    long long maxSubarraySum(int arr[], int n){
        
       long long sum=0,max_sum=0,n_count=0,max=INT_MIN;
       for(int i=0;i<n;i++)
       {
           // Handles cases when all the numbers in the array are negative
           if(arr[i]<0)
           {
            n_count++;   
            if(arr[i]>max)
            {
                max=arr[i];
            }
           }
           
           // Handles normal cases
           sum+=arr[i];
           if(sum<0)
           {
               sum=0;
           }
           else if(sum>max_sum)
           {
               max_sum=sum;
           }
       }
       if(n_count==n)
           return max;
       return max_sum;
        
    }
};
