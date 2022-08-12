bool is_array_palindrome(int array[], int n){
  bool answer = true;
  
 if (n<1){
   return false;}
  else{
    for (int i=0; i<n/2, i++){
      if (array[i] !=array[n-i-1]||array[i]>array[i+1]){
        answer=false;
        return answer;)
        }
    }
    return answer;
  }
