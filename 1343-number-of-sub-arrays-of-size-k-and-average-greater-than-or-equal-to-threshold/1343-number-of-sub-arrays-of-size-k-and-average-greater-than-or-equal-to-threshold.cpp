class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0,c=0,sum=0;
        while(j<arr.size())
        {
            sum+=arr[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                float avg=(sum*1.0)/k;
                if(avg>=threshold)
                    c++;
                sum-=arr[i];
                i++;
                j++;
            }
        }
        return c;
    }
};