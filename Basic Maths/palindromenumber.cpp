// To check if the giver input number is a palindrome or not 


#include <iostream>
using namespace std;

int main() 
{
    int  n ; cin >> n ; int reversenum = 0 ; int duplicatenum = n ; 
    while(n>0){
      int lastdigit= n%10 ; 
      n/=10 ; 
      reversenum= reversenum*10 + lastdigit ; 
    }
    
    if(reversenum == duplicatenum){
      cout<<"Yes , Palindrome Number"<<endl ; 
    }
    else {
      cout<<"Not a Palindrome Number"<<endl ; 
    }
    return 0;
}



/*
for input :
12321

Output:
Yes , Palindrome Number

*/