#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s={"abc#de#f#ghi#jklmn#op#"};
    int k=0;
    deque<char>s1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='#')
        {
            s1.push_back(s[i]);
        //    k++;
        }
    
    }
//    cout<<s1[0];
//    cout<<s1[1];
//    cout<<s1[2];
//    cout<<s1[3];
//    cout<<s1[4];
//    cout<<s1[5];
//    cout<<s1[6];
//    cout<<s1[7];
//    cout<<s1[8];
//    cout<<s1[9];
//    deque<char>:: iterator j=s1.begin();
      for(auto j=s1.begin();j!=s1.end();j++)
      {
      
      cout<<*j;
      }
    //  for(int i=0;i<s.length()-6;i++)
    //  cout<<s1[i];
    // s.push_back("");
    // auto i=s.begin();
    
    
    return 0;
}