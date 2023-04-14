#include<bits/stdc++.h>
using namespace std;
auto fun1(deque<int>s,auto it)
{
    for(auto x=s.begin();x!=s.end();x++)
{
    if(*x==*it)
    return x;
}
}
int main()
{
 deque<int>s={1,2,3,4,5};
 auto it=s.begin();
 advance(it,2);
 s.insert(it,7);
for(auto x=s.begin();x!=s.end();x++)
cout<<*x<<" ";
cout<<endl;
//will return address where newly element is inserted;
cout<<*fun1(s,it);
return 0;
}