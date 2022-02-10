int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res =1;
    
    while(n>0)
    {
        if(n&1)
        {//odd
            res=(1ll * (res) * (x)%m)%m;
            
        }
        x =(1ll *(x)%m * (x)%m)%m;
        n=n>>1;
    }
    return res;
}
