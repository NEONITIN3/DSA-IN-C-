#include<bits/stdc++.h>
using namespace std;
/*
arr aur targest sum diya gaya hai
find out karo kitne subset hai
jo ki sum kare to target k equal ho jaye
*/
int subset_count(int a[],int n,int target){

    if(n==0)
    return (target==0)?1:0;
    return  subset_count(a,n-1,target)+subset_count(a,n-1,target-a[n-1]);
}
int main(){
int n=6,a[]={1,2,3,4,5,6},target=8;
//here 2 o/p kyoki 2,6 aur 3,5 subset hai jo target sum k equal hai
cout<<"total_count_is_of_subset_sum  "<<subset_count(a,n,target);
}