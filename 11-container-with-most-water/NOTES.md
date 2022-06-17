long int l=0,maxi=0,total=0,r=height.size()-1;
while(l<r)
{
int k=min(height[l],height[r]);
total=(r-l)*k;
maxi=max(total,maxi);
if(k==height[l])
l++;
else
r--;
}
return maxi;