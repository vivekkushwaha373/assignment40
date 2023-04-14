#include<bits/stdc++.h>
using namespace std;
int main()
{
 deque<int>l1={1,2,3,4,5};
 l1.erase(l1.begin());
 for(auto i=l1.begin();i!=l1.end();i++)
 cout<<*i<<" ";
 cout<<endl;
 l1.erase(l1.begin(),++++l1.begin());
 for(auto i=l1.begin();i!=l1.end();i++)
 cout<<*i<<" ";
}