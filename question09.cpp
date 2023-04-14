#include<bits/stdc++.h>
using namespace std;
int main()
{
   queue<string>q;
   for(int i=0;i<5;i++)
   q.push(i+1);
   int k=1;
//    cout<<q[0]<<endl;
   while(!q.empty())
   {
    cout<<q.front()<<" ";
    k=q.front()*k;
    q.pop();
   }
   cout<<endl;
   cout<<"permutation= "<<k;
    return 0;
}