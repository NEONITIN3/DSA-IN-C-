//[1,0,3] target=4  o/p=[0,2] beacuse at0,2 we have 1+3 =4;
#include<bits/stdc++.h>
using namespace std;
//bruet force method 0(n^2)
int main(){
    int a[]={1,2,5,8,90,5,3};
    // int index[2];
    int target=3;
    //int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<6;i++){
        for(int j=i;j<7;j++)
        {
            if(a[i]+a[j]==target)
          cout<<i<<" "<<j;
          break;
      
        }
    }
    // for(int i=0;i<2;i++){
    //     cout<<index[i]<<" ";
    // }
return -1;
}