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
int main(){

//simple way

cout<<count_setbits(7)<<endl;


    /* for counting the number of ones in integer 
    we have building function 
     _builtin_popcount()

its count number of one in given 
inegeter after converting binary
    */
   
}