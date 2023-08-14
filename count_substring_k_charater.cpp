// Given a string of lowercase alphabets, count all possible 
// substrings (not necessarily distinct) that has exactly k distinct characters
#include<bits/stdc++.h>
using namespace std;
int substring_k(string str, int length, int k){
   int count = 0;
   int array[26];
   for (int i = 0; i < length; i++){
      int temp = 0;
      memset(array, 0, sizeof(array));
      for (int j = i; j < length; j++){
         if(array[str[j] - 'a'] == 0){
            temp++;
         }
         array[str[j] - 'a']++;
         if (temp == k){
            count++;
         }
         if(temp > k){
            break;
         }
      }
   }
   return count;
}
int main(){
   string str = "abc";
   int length = str.length();
   int k = 1;
   cout<<"Count of number of substrings with exactly k distinct characters are: "<<substring_k(str, length, k);
   return 0;
}