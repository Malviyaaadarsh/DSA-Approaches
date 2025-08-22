
// Extraction of digits 

#include <iostream>
using namespace std;

int main() 
{
    int n ; cin >> n ; int counter = 0 ; 
    while(n>0){
      int lastdigitextract = n%10 ; 
      n/=10 ; 
      counter+=1 ; 
      cout<<lastdigitextract<<endl ; 
    }
    
    cout << "No. of digits : "<< counter <<endl ; 
    cout << "Time Complexity : "<< "O(log base 10 n)"<<endl ; 
    
    return 0;
}



/*
 for input : 79865

 Output:
5
6
8
9
7
No. of digits : 5
Time Complexity : O(log base 10 n)  */