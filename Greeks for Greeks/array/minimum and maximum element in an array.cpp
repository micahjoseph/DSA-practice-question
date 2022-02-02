// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) 
{
   
   long long int minNo=INT_MAX;
   long long int maxNo=INT_MIN;
   pair<long long , long long> ans;
   for(int i=0;i<n;i=i+1 )
   {
   maxNo=max(a[i],maxNo);
   minNo=min(a[i],minNo);
   }
   ans.first=minNo;
   ans.second=maxNo;
   return ans;
   }
    
