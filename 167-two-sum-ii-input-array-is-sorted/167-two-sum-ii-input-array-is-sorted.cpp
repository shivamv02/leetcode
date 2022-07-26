class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size()-1;i++)
        {
            int no=target-numbers[i];
            int l=i+1,h=numbers.size()-1;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if(numbers[mid]==no)
                    return {i+1,mid+1};
                else if(no>numbers[mid])
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        return {-1};
        
    }
};