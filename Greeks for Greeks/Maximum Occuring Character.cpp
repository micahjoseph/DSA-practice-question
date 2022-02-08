// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int>v(26,0);
        int n=str.length();
        for(auto i:str)
        v[i-'a']++;
        int maxx=0;
        char c;
        for(int i=0;i<26;i++)
        {
            if(maxx<v[i])
            maxx=v[i];
            c=i+'a';
        }
        return c;
        }
};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends
