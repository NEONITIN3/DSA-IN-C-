#include<bits/stdc++.h>
using namespace std;
/*
n=3 k=1
3=11 yes becoz 1 bit 1 hai
n=8 k=2
8=1000 but 2 bit 0 hai to o/p NO
*/
int main(){
    int n,k;
    cin>>n>>k;
    (n>>k)&1?cout<<"yes":cout<<"NO";
}