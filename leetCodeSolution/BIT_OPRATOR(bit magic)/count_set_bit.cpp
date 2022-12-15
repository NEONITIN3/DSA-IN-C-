#include<bits/stdc++.h>
using namespace std;
//count the set bit in given intger binary reprasentation
//5-101 so o/p 2
//7-111 o/p 3;
int main(){
int n=7;
int c=0;
while(n>0)
{
    if(n&1==1){  //agar last wala 1 hai to c++ kar do
        c=c+1;
        n=n>>1; //n ko kam karna hai to 1 digit right shift kar do

    }
}
cout<<c;
}