#include<bits/stdc++.h>
using namespace std;
//its artmaticapproach which take 0(long(n)) time space O(1)

//but we can do it with 0(1) by bit manupulation...;
int mathapproach(int n){
    int binarynum[32];
    int i=0;//initial index
    while(n)  //jab n>0 yah esko justify karega 
    {
        binarynum[i]=n%2;
        n=n/2;
        i++;
    }
    //kyoki ham jante hai operation karne k baad last m niche se upar k digit ko 
    //likhate hai means reverse karna hoga
    //i is the size of the array
    for(int j=i-1;j>0;--j){
        cout<<binarynum[j];
    }
    return 0;
}

int main()
{
     int n;
    cin>>n;
    cout<<mathapproach(5);
}  