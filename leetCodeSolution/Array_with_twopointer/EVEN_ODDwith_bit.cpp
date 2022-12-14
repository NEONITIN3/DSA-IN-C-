#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=9;
    //and kar lo 1 k sath number ka agar last bit 1 aa agya eska matalb 
    //number k binary m last m 1 hai  to tabhi and karne k baad 1 aaya hai
    //5-101,7-111,jitne bhi odd hai unka last bit 1 hi hoga hamesa to esi liye
    

//     if(n&1==0)
//    cout<<"even hai number last bit o hai ";
//     else
//    cout<<"odd";

   n&1? cout<<"odd":cout<<"even";

} 