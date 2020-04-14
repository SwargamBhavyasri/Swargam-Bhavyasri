/*filename : Construct_Order.cpp
  Author   : Swargam Bhavyasri  */
#include<iostream>
using namespace std;
class car
{
	public : car()                                    
	{
		cout<<"This is a car Constructor(Base)"<<endl;
		func1();
	}
	~car()                            
	{
		cout<<"Destructing a car"<<endl;
	}
	virtual void func1()
	{
		cout<<"Virtual Function"<<endl;
	}
	void func2()
	{
		func1();
	}
};
class maruthi : public car
{
	public : maruthi()
	{
		cout<<"This is maruthi Constructor (Derived)"<<endl;
	}
    virtual	void func()
	{
		cout<<"maruthi(derived class)Virtual Function"<<endl;
	}
	 virtual  ~maruthi()
	{
		cout<<"Destructing class Maruthi"<<endl;
	}
};
int main(int argc,char *argv[])
{
	if(argc==2)
	{
		cout<<"\\Usage of the program:\\"<<endl;
		cout<<"No Input" <<endl;
	}
	else
	{ 
	car *p,c;
	maruthi m;         //object creation
	p=&c;              
	p->func1();        // point to base class
	p=&m;
	p->func1();        // point to derived class
	return 0;
	}
	

}
