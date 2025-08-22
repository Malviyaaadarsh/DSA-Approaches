// Check if the given number is prime number or not 

#include <iostream>
using namespace std;

int main() 
{
    int n ; cin >> n ; int counter = 0 ; 
    for(int i = 1 ; i*i<= n ; i++){
      if(n%i==0){
        counter+=1 ; 
        if(n/i!=i){
      counter+=1 ; 
    } 
      }
     
    }
    if(counter==2){
    cout<<"Yes,Prime Number"<<endl ; 
  }
  else{
    cout<<"Not a prime Number"<<endl ; 
  }
    cout<<"Time Complexity: O(sqrt(n))"<<endl ; 
    return 0;
}



/*

Brute force : 

#include <iostream>
using namespace std;

int main() 
{
    int n ; cin >> n ; int counter =0 ; 
    for(int i=1 ; i<= n ; i++){
      if(n%i==0){
        counter +=1 ; 
      }
    }
    
  if(counter==2){
    cout<<"Yes,Prime NUmber"<<endl ; 
  }
  else{
    cout<<"Not a prime Number"<<endl ; 
  }
    return 0;
}

*/