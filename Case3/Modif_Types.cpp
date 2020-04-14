/*filename: Modif_Types.cpp
  Author :  Swargam Bhavyasri */
#include<iostream>
#include<string.h>
using namespace std;
int age=16;                    //Declared Global variable
void display()                 
{
    int age=18;//Local Variable Declaration which will be used for this particulor function
    cout<<"Any Indian can eligible for Right to Vote:"<<age<<endl;//age can be accessed by global declared variable
}
void display1()      
{
    unsigned char a='c'; //unsigned character Modifier
    signed char b='a'; //signed character Modifier
    unsigned int c=2500;//unsigned integer Modifier
    signed int d= -2500;//signed integer Modifier
    unsigned short int e=2500;//unsigned shor integer Modifier
    signed short int f= -5000;//signed short integer Modifier
    unsigned long int g=5000;//unsigned long integer Modifier
    signed long int h=-2500;//signed long integer Modifier
    long double i=6000;//Long double Modifier 
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl<<i;
}
void type_storage()
{
	{
    long double lValue;         
    cout<<"Enter the double value:";
    cin>>lValue;
    static int iStatic_No;    
    register int iRegister_N;    
    cout<<"Enter the Register ";
    cin>>iRegister_N;
    iStatic_No=iStatic_No+iRegister_N*2;
    for(int iStart=0;iStart<lValue;iStart++)
    {
        iStatic_No++;
    }
    cout<<endl;
    cout<<"Storage classes"<<endl;
     cout<<"Static   = "<<iStatic_No<<" "<<"Size:"<<sizeof(iStatic_No)<<endl;
    cout<<"Register = "<<iRegister_N<<" "<<"Size:"<<sizeof(iRegister_N)<<endl;
    cout<<"Double Value:"<<lValue<<" "<<"Size of Double:"<<sizeof(lValue)<<endl;
    cout<<endl;
}
}
int main(int argc,char **argv)
{
    
    if(argc == 2 ) //comments for displaying -h file 
   
    {
        cout<<"Usage:"<<endl;
        cout<<" Input : Values "<<endl;
        
    }
    else
    {
        display();//displaying the function
        cout<<"Not Eligible :"<<age<<endl;//Here age is taken globally
        type_storage();
        display1();
    
        
    }
    return 0;
}
