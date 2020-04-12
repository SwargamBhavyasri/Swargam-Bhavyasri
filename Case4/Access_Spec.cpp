/* filename :Access_Spec.cpp
   Author : Swargam Bhavyasri*/
#include<iostream>
using namespace std;
class shape                  //Base class
{
    //private members
   	int iArea;
	public: int area(int iLength,int iBreadth)
		{
			iArea=iLength*iBreadth;
			cout<<  "Area :"         <<iArea<<endl;
		}
	protected : int iPerimeter;     //using protected access specifier
};
class Rectangle : private shape      //derived class
{
	public: int iP;                   // public members
	   int per(int iLen, int iWidth)
	   {
	   	iP=iLen+iWidth;
	   	iPerimeter= 2*iP;
	   	cout<< "Perimeter :"      <<iPerimeter<<endl;
	   }
};

int main(int argc,char* argv[])
{
   if(argc==2)	   //condition for the arguments to display -h file
   {
   	cout<<"\\Usage of the program:\\"<<endl<<"Access Specifiers :::"<<endl<<endl;
   	cout<<" Private members  ::  Can be accessed with in the class"<<endl<<endl;
   	cout<<"Protected ::  Inaccessible outside the class but they can be accessed by any derived class of that class" <<endl<<endl;
   	cout<<"Public members :: Accessible throughout the program"<<endl<<endl;
   	cout<<" "<<endl;
   }
   else
   {
   	shape s;          //objects creation for classes
   	Rectangle r;
   	s.area(5,5);
   	r.per(5,5);
   	return 0;
   }
}

   
   

