// To check if the given number is Armstrong number or not 

#include <iostream>
using namespace std;

int main() 
{
    int n ; cin >> n ; int duplicatenum = n ; int sum = 0 ; 
    while(n>0){
      int lastdigit = n%10 ; 
      n/=10 ; 
      sum = sum + lastdigit*lastdigit*lastdigit ; 
    }
  
  if(sum==duplicatenum){
    cout<<"Yes , Armstrong Number"<<endl ; 
  }
  else{
    cout<<"Not an Armstrong Number"<<endl ; 
  }
  
    return 0;
}

