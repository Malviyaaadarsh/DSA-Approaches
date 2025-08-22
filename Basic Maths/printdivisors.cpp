// To print all the divisors of a given number 


#include <iostream>
using namespace std;

int main() 
{
    int n ; cin >> n ; 
    for(int i =1 ; i*i<=n ; i++){
      if(n%i==0){
        cout<<i<<endl ; 
         if((n/i)!= i){
        cout<<n/i<<endl ; 
      }
      }
     
    }
    cout<<"Time Complexity : O(sqrt(n))"<<endl ; 
    return 0;
}

// --------------------------------------------------------------------------------------------------------


/*     Brute Force :  
 
#include <iostream>
using namespace std;

int main() 
{
    int n ;  cin >> n ; 
    for(int i =1 ; i<= n ; i++){
      if(n%i==0){
        cout<<i <<endl ; 
      }
    }
    cout<<"Time Complexity : O(n)"<<endl ; 
    return 0;
}

*/ 