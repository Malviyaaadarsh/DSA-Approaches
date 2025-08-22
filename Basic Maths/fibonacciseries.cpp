#include <iostream>
using namespace std;

int f(int n){
  if(n<=1){
    return n; 
  }
  else{
    return f(n-1) + f(n-2); 
  }
}

int main() 
{
   int n ; cin >> n ; 
for(int i=0; i<n ; i++){
  cout<<f(i)<<", "; 
}
cout<<f(n); 
    return 0;
}


