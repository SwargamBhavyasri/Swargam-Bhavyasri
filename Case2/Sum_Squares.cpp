/* Filename            :      Sum_Squares.cpp
   Creation Author     :      S.Bhavyasri
   */
#include<iostream>
using namespace std;
int squaresum(int iNum) 
{ 
    return (iNum * (iNum + 1) * (2 * iNum + 1)) / 6; 
} 
int main(int argc, char *argv[])
{
	if(argc==2)             //checking arguments to display -h
	{
		cout<<"Usage :"<<endl;
		cout<<"Input : Integer"<<endl;
		}
	else
	{
		int iNum;               // declaration of variable using integer data type
		cout<<"Enter Number"<<endl;
		cin>>iNum;
		squaresum(iNum);                 //function call
		cout<<squaresum(iNum)<<endl;
		
	}
}

