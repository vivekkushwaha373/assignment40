#include<bits/stdc++.h>
using namespace std;
int main()
{
 deque<int>l1={1,2,3,4,5};
 l1.assign(2,5);
 for(auto i=l1.begin();i!=l1.end();i++)
 cout<<*i<<" ";
 cout<<endl;
  return 0;
}