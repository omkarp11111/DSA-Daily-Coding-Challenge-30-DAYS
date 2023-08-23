// Given a string with brackets. 
// If the start index of the open bracket is given,
//  find the index of the closing bracket.
#include <bits/stdc++.h> 
using namespace std; 
  
void test(string expression, int index){ 
    int i; 
      
    if(expression[index]!='['){ 
        cout << "-1\n"; 
        return; 
    } 
      
    stack <int> st; 
      
    for(i = index; i < expression.length(); i++){ 
          
        if(expression[i] == '['){ 
            st.push(expression[i]);
        }
          
        else if(expression[i] == ']'){ 
            st.pop(); 
            if(st.empty()){ 
                cout << i << "\n"; 
                return; 
            } 
        } 
    } 
      
    cout << "-1\n"; 
} 
  
int main() { 
    string s = "[ABC[23]][89]";
    int index = 0;
    
    test(s, index); 
    
    return 0; 
}