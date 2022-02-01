void bubbleSort(vector<int>& arr, int n)
{   
    
    for(int i=0; i<n; i++){
        //for round 1 to n-1
        for(int j=1; j<n; j++){
            //process till n-i index
            int i=j-1;
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
}
