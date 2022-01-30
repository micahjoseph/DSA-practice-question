  #include<iostream>
using namespace std;

bool isPrime(int n){
    int count = 0;

    
    if(n < 2)
        return false;
    
    
    for(int i = 2;i < n/2; i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    
    return true;
}

int main()
{
    int lower, upper;
    
    cout << "Enter lower and upper ranges : "; 
    cin >> lower >> upper;
    
    for(int i = lower; i <= upper; i++)
        if(isPrime(i))
            cout << i << " ";

}
// Time Complexity : O(N^2)
// Space Complexity : O(1)
