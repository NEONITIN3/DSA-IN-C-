#include<bits/stdc++.h>
using namespace std;
//string ko by reference pass karenge copy ko avoid karne k liye baar baar
bool checkpalindrom(string &s ,int start,int end){
if(start>=end) //matlb ki ek hi char hai string m
return true;
//else recursive pahlii baat to last aur start ka element same hoo
return (s[start]==s[end] )&& checkpalindrom(s,start+1,end-1) ;
//ek ko badao lasrt wale ko ghatao

//o/p 0 meant not palindrom 1 means palindrom

}
int main(){
    string s="NITIN";
    //string s1="abbbba";
    int n=s.length();
    int start =0,end=n-1;
    cout<< checkpalindrom(s,start,end);
    //checkpalindrom(s1);
    return 0;
}