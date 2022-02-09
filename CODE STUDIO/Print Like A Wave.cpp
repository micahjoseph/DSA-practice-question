vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)

{

   //Write your code here

   vector<int>ans;

   for(int col=0;col<mCols;col++){
       //if index is odd we have to print bottom to up

       if(col%2!=0){

           for(int row=nRows-1;row>=0;row--){

               ans.push_back(arr[row][col]);

           }

       }

       else{

       //if index is even we have to print top to bottom

            for(int row=0;row<nRows;row++){

               ans.push_back(arr[row][col]);

       }

   }

 }

   return ans;

}

 
