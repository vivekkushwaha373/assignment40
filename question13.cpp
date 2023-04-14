#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>s1={1,2,3,4,5,6,7,8,9,10};
    deque<int>s2;
    for(auto i=s1.begin();i!=s1.end();i++)
    {
         i++;
         s2.push_back(*i);
    }
    for(auto i=s1.begin();i!=s1.end();i++)
    {
         s2.push_back(*i);
         i++;
    }
    
    for(auto i=s2.begin();i!=s2.end();i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}