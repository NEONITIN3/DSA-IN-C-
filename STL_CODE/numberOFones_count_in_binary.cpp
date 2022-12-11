#include<bits/stdc++.h>
using namespace std;

int count_setbits(int N)
{  cout<<"this is the simple solution couting set bit 1 in binary"<<endl;
   int cnt=0;

   while(N>0)
   {
       cnt+=(N&1);
       N=N>>1;
   }

   return cnt;
}
int main()
{

//simple way

cout<<count_setbits(7)<<endl;


    /* for counting the number of ones in integer 
    we have building function 
     _builtin_popcount(var);

    its count number of one in given 
    inegeter after converting binary
    */
   cout<<"this is the buildin function used for count"<<endl;
   int m=5;
   cout<<__builtin_popcount(m);
   //__builtin_popcount
   
}