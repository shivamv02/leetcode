class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num)
        {
            if(num%2==0)
            {
                num/=2;
                c++;
            }
            else
            {
                num--;
                c++;
            }
        }
        return c;
    }
};