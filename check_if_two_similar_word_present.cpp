// Day 20 of 30
// Given a sequence of n strings, the task is to check if any two similar words come together and
//  then destroy each other then print the number of words left in the sequence after this pairwise destruction.
// Input : ab aa aa bcd ab
// Output : 3
#include<bits/stdc++.h> 
using namespace std; 
  
int removeConsSame(vector<string > s){ 
    stack<string> st; 
  
    for(int i=0; i<s.size(); i++){ 
        if(st.empty()){ 
            st.push(s[i]);
        }
        
        else{ 
            string str = st.top(); 
  
            if(str.compare(s[i]) == 0){ 
                st.pop(); 
            }
  
            else{
                st.push(s[i]);
            }
        } 
    } 
  
    return st.size(); 
} 
  
int main(){ 
    vector<string> s = {"ab", "aa", "aa", "bcd", "ab"};
    
    cout << removeConsSame(s); 
    
    return 0; 
}
