// SUBARRAY_PRODUCT_LESS_THAN_K
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long temp=1;
        int ans=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            temp*=a[i];
            while(temp>=k && j<=i)
            {
                temp/=a[j];
                j++;
                
            }
            ans+=(i-j+1);
        }
        return ans;
        
    }
};

// TIME COMPLEXITY :O(N)
// SPACE COMPLEXITY :O(1)