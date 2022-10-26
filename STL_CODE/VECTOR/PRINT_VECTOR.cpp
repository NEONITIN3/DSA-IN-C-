#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   vector<int>v3(5,-1);//each initial value is -1
         for(int i=0;i<v3.size();i++){
    cout<<v3.at(i)<<" ";
         }
         cout<<endl;
         v3.emplace_back(65);
         //now -1 -1 -1 -1 -1 65 //back_push karne k baad array status
         cout<<v3[5];
}         