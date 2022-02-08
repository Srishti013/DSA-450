pair<long long, long long> getMinMax(long long a[], int n) {
     long long int maxm=INT_MIN,minm=INT_MAX;
     for(long long int i=0;i<n;i++)
     {
         maxm=max(a[i],maxm);
         minm=min(a[i],minm);
     }
    pair<long long, long long> ans = make_pair(minm,maxm);
    return ans;
