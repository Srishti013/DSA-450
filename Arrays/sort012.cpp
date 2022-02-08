// Two Traversals

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



// One Traversal


void sort012(int arr[], int n)
{
    int low=0,mid=0,high=n-1;
    
    while(mid <= high)
    {
        if( arr[mid]==0 )
        {
            swap(arr[mid++],arr[low++]);
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[high--],arr[mid]);
        }
    }
}
