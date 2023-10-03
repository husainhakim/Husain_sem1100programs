//Calculate the sum of digits of a number using a do-while loop.

#include <iostream>  
using namespace std;  
int main(){

    int n,sum=0,m; 
//taking the input from user
    cout<<"Enter a number: ";    
    cin>>n;

//using do while loop  

    do{m=n%10;    
    sum=sum+m;    
    n=n/10; 
} 
    while(n>0);      
    cout<<"Sum is = "<<sum<<endl;    
    return 0;  
}