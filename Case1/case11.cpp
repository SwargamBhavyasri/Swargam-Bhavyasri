/*  Filename          :     case11.cpp
    Description       :     To calculate the size of the datatype
    Creation Author   :   S. Bhavyasri
    */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
bool checkchar(string s)
{
	int  val;
	for(val=0; s.length()==1;val++)     
	{
		return true;
	}
}
int main( int argc,char *argv[])
{
	int ix;                     //declaration of variables of int data type
	int inum;
	double dpoint;             // declaring the variable of double data type
	if(argc==2)
	{
    cout<<"The purpose of the program is to calculate the size of the datatype "<<endl;
		}
	else
	{
	for(ix=1;ix<argc;ix++)               
		{
		inum=atoi(argv[ix]);         //atoi function used to convert a string to integer
     	dpoint=atof(argv[ix]);       // atof function used to convert a string to float
		if(inum==0)
		{
          	if(checkchar(argv[ix]))         // if condition for checking the string
			{
		  cout<<"Char";
      	  cout<<"\t"<<argv[ix]<<"\t"<<strlen(argv[ix])<<endl;
			}
		else
	     	{
	     	cout<<"String";
		    cout<<"\t"<<argv[ix]<<"\t"<<sizeof(argv[ix])<<endl;    
			}
		}
		else
			{
		 	if(inum==dpoint)                 // if condition for comparing the values                      
			cout<<"Integer"<<"\t"<<inum<<"\t"<<sizeof(inum)<<endl;
			else
			cout<<"Double"<<"\t"<<dpoint<<"\t"<<sizeof(dpoint)<<endl;
			}
		}
			return 0;
}}


