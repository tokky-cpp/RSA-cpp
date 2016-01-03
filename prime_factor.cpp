#include<iostream>
#include<cmath>
using namespace std;
int main(){
  
  long long n;
  double in; cin>>in;
  //cin>>n;
  n=(long long)in;
  for(long long i=2;i<sqrt(n)+1;i++){
    if(n%i==0){cout<<i<<' '<<n/i<<endl;return 0;}
  }
  cerr<<n<<" is a prime number."<<endl;
}
  
