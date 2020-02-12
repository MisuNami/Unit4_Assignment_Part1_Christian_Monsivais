/* Christian Monsivais COSC 1436 DrT 
IDE: Repl.it C++ 
This program accepts input from the user, it multiplies,divides the input with itself it also executes some math formulas */ 

//if the value 0 is entered the program can not execute the multiplication or division so I created a while loop until user inputs a different number

//if a character (j) is entered the program loops forever


#include <iostream>

#include <cstdlib>

using namespace std;


int main() 
{
  
  //declaring variables
  double n, counter = 0.0; 
  

  //asking the user for an input number
cout <<"Please enter a number (-1 is exit value) : ";
cin >> n;
while(n == 0)
{
  cout <<" Division by 0 is not permitted\n";
  cout <<"Please enter a number (-1 is exit value) : ";
  cin >> n;
}
// using for loop to run the program until user inputs exit value
  
for(double counter = 1 ; n != -1 ; counter++)
{

  
  cout <<"\nYou have entered: " << n << endl;
  
  cout <<"Your number times itself is: " << n * n << endl;
  cout <<"Your number divided by itself is: " << n / n << endl;
  cout << "Your number (n+3)/5 = " << ((n+3)/5) << endl;
  cout <<"Your number ( (n+3)/5 ) + ( (n+7)/2 ) = " <<  ( (n+3)/5 ) + ( (n+7)/2 ) << endl;
  
  //output of the counter value
  cout <<"Value of your counter is " << counter << endl;


// insterting a break to the loop to accept more input from the user
  cout <<"\nPlease enter your number (-1 is exit value) : ";
  cin >> n;



 

}




return 0;
}

