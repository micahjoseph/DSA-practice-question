void insertionSort(int n, vector<int> &arr){
    // Write your code here.
     int i ,j;
    for( i = 1;i < n;i++){
        int temp = arr[i];
        for( j = i-1;j >=0;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
                else{
                   break; 
                }
         }
        arr[j+1] = temp;
    }
    

   
}
