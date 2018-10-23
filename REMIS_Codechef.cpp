#include <iostream>
using namespace std;
int main() {
    int t;
  long long int  count1,count2;
  cin>>t;
  for(int i=0;i<t;i++){
  cin>>count1>>count2;
  cout<<(count1>count2?count1:count2)<<" ";
  cout<<count1+count2<<endl;
}
}

