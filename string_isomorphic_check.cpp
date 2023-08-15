#include<bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;
 

bool isIsomorphic(string s1, string s2)
{
 
    int m = s1.length(), n = s2.length();
 

    if (m != n)
      return false;
 

    bool is_visited[NO_OF_CHARS] = {false};
 
    int map[NO_OF_CHARS];
    memset(map, -1, sizeof(map));
 
    // P
    for (int i = 0; i < n; i++)
    {
       
        if (map[s1[i]] == -1)
        {
          
            if (is_visited[s2[i]] == true)
                return false;
 
           
            is_visited[s2[i]] = true;
 
          
            map[s1[i]] = s2[i];
        }
 
        


        
        else if (map[s1[i]] != s2[i])
            return false;
    }
 
    return true;
}
 
int main()
{
   string s1,s2;
   cin>>s1>>s2;
   if(isIsomorphic(s1, s2))
   {
       cout<<"TRUE"<<endl;
   }
   else
   {
       cout<<"FALSE"<<endl;
   }
   return 0;
}