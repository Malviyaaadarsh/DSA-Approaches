// Reversing a number without including trailing zeroes 
// in C++ 

#include <iostream>
using namespace std;

int main() 
{
   
   int n ; cin >> n ; int reversenum = 0 ; 
   while(n>0){
     int lastdigit = n%10 ; 
     n/=10 ; 
     reversenum= reversenum*10 + lastdigit ; 
   }
   cout<< reversenum << endl ; 
    return 0;
}


/*

for input : 
154782

Output:
287451

*/