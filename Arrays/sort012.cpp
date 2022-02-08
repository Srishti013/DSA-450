void sort012(int a[], int n)
{
    int c_0=0,c_1=0,c_2=0;
   for(int i=0;i<n;i++) 
   {
       if(a[i]==0)
           c_0++;
       else if(a[i]==1)
           c_1++;
       else
           c_2++;
   }
   for(int i=0;i<c_0;i++)
   {
       a[i]=0;
   }
   for(int i=c_0;i<c_0+c_1;i++)
   {
       a[i]=1;
   }
   for(int i=c_0+c_1;i<n;i++)
   {
       a[i]=2;
   }
}
