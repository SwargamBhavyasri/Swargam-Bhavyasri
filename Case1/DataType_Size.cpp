/*  Filename          :     DataType_Size.cpp
    Creation Author   :   S. Bhavyasri
    */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
bool checkchar(string s)     //To check the length of the string is 1
{
	int  iVal;
	for(iVal=0; s.length()==1;iVal++)     
	{
		return true;
	}
	return false;
}
int main( int argc,char *argv[])
{
	int iX;     //declaration of variables of int data type
	int iNum;
	double dPoint; // declaring the variable of double data type
	if(argc==2)
	{
    cout<<"Usage:"<<endl;
    cout<<"argv[0],datatype1,datatype2,datatype3........."<<endl;
		}
	else
	{
	for(iX=1;iX<argc;iX++)               
		{
		iNum=atoi(argv[iX]);   //atoi function used to convert a string to integer
     	dPoint=atof(argv[iX]);  // atof function used to convert a string to float
		if(iNum==0)
		{
          	if(checkchar(argv[iX]))  // if condition for checking the string
			{
		  cout<<"Char";
      	  cout<<"\t"<<argv[iX]<<"\t"<<strlen(argv[iX])<<endl;
			}
		else
	     	{
	     	cout<<"String";
		    cout<<"\t"<<argv[iX]<<"\t"<<sizeof(argv[iX])<<endl;    
			}
		}
		else
			{
		 	if(iNum==dPoint)                 // if condition for comparing the values                      
			cout<<"Integer"<<"\t"<<iNum<<"\t"<<sizeof(iNum)<<endl;
			else
			cout<<"Double"<<"\t"<<dPoint<<"\t"<<sizeof(dPoint)<<endl;
			}
		}
			return 0;
}}


