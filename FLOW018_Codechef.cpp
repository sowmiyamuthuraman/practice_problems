#include <iostream>
using namespace std;
long long int factorial(int n){
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main() {
  int t,number;
  cin>>t;
  for(int i=0;i<t;i++){
      cin>>number;
      cout<<factorial(number)<<endl;
  }
}

