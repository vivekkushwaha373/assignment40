#include<bits/stdc++.h>
using namespace std;
int main()
{
 deque<int>l1={1,2,3,4,5};
 auto i=l1.rend();//it points to an arbitrary element before 1
 --i;
 cout<<*i;
  return 0;
}