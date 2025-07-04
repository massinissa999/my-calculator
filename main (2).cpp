/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{


     char op;
     int num1;
     int num2;
     int result;
     cout<<"********* the new calculator**********"<<"\n";
     
     
     cout<<"enter one of the operators(* + - /): "<<"\n";
     cin>>op;
     
     cout<<"enter your first number: ";
     cin>>num1;
     
    
     cout<<"enter your second number: ";
     cin>>num2;
     
     switch(op){
         
         case '+':
        result = num1 + num2;
        cout<< "result = "<< result;
         break;
         
         case '-':
         result= num1 - num2;
         cout<< "result= "<<result;
        break;
        
        case '*':
        
        result= num1 * num2;
        cout<<" result = "<<result;
        break;
        
        case '/':
         result = num1 / num2;
         cout<< "result = "<<result;
         break;
         
         default:
         cout<<"you have entered a wrong operator ";
         break;
         
         
         
         

     }
     
     
     
     
     
    return 0;
}