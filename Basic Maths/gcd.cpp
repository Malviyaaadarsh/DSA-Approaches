// To find GCD/HCF of a two numbers n1 and n2 
// Eucledian Algorithm = GCd(N1,N2)= GCD(N1-N2, N2)
// Best Approach : GCD(n1,n2)= GCD(n1%n2,n2)

#include <iostream>
using namespace std;

int main() 
{
    int n1 , n2 ; cin >> n1>>n2; 
    while(n1>0 && n2> 0){
      if(n1>n2){
        n1%=n2 ; 
      }
      else{
        n2%=n1 ; 
      }
    }
    if(n1==0){
      cout<<n2; 
    }
    else{
      cout<<n1 ;
    }
    return 0;
}
