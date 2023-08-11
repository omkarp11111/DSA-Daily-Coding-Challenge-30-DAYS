// You are given a string S, the task is to reverse the string word by word.

// Input - "i love programming"
// Output - "programming love i"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="i love programming";
    cout<<"Before reversing words: "<<endl;
    cout<<s<<endl;
    s+=" ";
    stack<string> st;
    int i;
    string str="";
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            st.push(str);
            str="";
        }
        else str+=s[i];
    }
    string ans="";
    while(st.size()!=1)
    {
        ans+=st.top()+" ";
        st.pop();
    }
    ans+=st.top();
    cout<<"After reversing words: "<<endl;
    cout<<ans;
    return 0;
}