/* Filename            :      case2.cpp
   Description         :      To calculate the sum of squares of n numbers.
   Creation Author     :      S.Bhavyasri
   */
#include<iostream>
using namespace std;
int squaresum(int n) 
{ 
    return (n * (n + 1) * (2 * n + 1)) / 6; 
} 
int main(int argc, char *argv[])
{
	if(argc==2)             //checking arguments to display -h
	{
		cout<<"Return the sum of squares of n numbers"<<endl;
		}
	else
	{
		int n;               // declaration of variable using integer data type
		cout<<"enter number"<<endl;
		cin>>n;
		squaresum(n);                 //function call
		cout<<squaresum(n)<<endl;
		
	}}
