 int findDuplicate(vector<int> &arr) 
{
  int ans=0;
    
    for(int i=0; i<arr.size(); i=i+1)
    {
        ans=ans^arr[i];
    }
	for(int i=1; i<arr.size(); i=i+1)
    {
        ans=ans^i;
    }
    return ans;
}
