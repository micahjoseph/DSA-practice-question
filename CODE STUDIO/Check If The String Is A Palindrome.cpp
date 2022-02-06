bool checkPalindrome(string s)

{

   int end=s.size()-1;

   int start=0;

 

    while(start<end){

 

        if((tolower(s[start])<97 ||tolower(s[start])>123) &&  

           (tolower(s[start])<48 ||tolower(s[start])>57))

        {

 

                   start++;

                   continue;

               }  

 

        if((tolower(s[end])<97 ||tolower(s[end])>123) &&  

           (tolower(s[end])<48 ||tolower(s[end])>57))

        {

 

                     end--;

                    continue;

               }  

 

         if(tolower(s[start])==tolower(s[end]) )

         {

 

                   start++;

                   end--;

 

               } else{

 

                     return  false;

               }

    }

   return true;

}
