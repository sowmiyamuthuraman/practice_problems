#include <iostream>
#include<math.h>
#include<limits.h>
using namespace std;
int gcd(int m,int n){
    if(n==0)
    return m;
    else
    return gcd(n,m%n);
}
int main() {
  int n,a[50],b[50],min,t,i,j,k;
  cin>>t;
  for(i=0;i<t;i++){
  cin>>n;
  for(j=0;j<n;j++){
     cin>>a[j];
  }
  min=a[0];
  for(j=1;j<n;j++){
    min=gcd(min,a[j]);
  }
    for(k=0;k<n;k++){
      cout<<a[k]/min<<" ";
      a[k]=0;
      }
      cout<<endl; 
  }
}
