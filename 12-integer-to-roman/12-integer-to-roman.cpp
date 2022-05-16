class Solution {
public:
    string intToRoman(int num) {
       
      vector<int> in={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string s;
        for(int i=0;i<in.size();i++)
        {
            int n=num/in[i];
            while(n--)
                s+=roman[i];
            num=num%in[i];
                
        }
        return s;
    }
};