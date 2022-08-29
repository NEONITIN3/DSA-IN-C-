#include<bits/stdc++.h>
using namespace std;
//printing increasing array with recursion;
//in 6
//op 6 5 4 3 2 1 1 2 3 4 5 6;
void solve(int n){
  if(n<1)//base case
  return;
  solve(n-1);
  cout<<n<<" ";
  return;
}
int main()
{
  int n=5;
  //cin>>n;
  solve( n) ;
  }
