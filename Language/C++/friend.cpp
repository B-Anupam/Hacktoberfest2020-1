#include<iostream>
using namespace std;
class First;
class Second 
{
   int b,c;
   public:
    void inpB()
	{
		std::cout<<"enter B:";
		std::cin>>b;
	}
	void sum(First f1)
		{ 
		 cout<<f1.a + b <<endl; 
	    }	
};
class First
{
   int a;
   public:
     
	void sum(First,Second);
   void inpA()
	{
		std::cout<<"enter A:";
		std::cin>>a;
	}
	
	friend void Second::sum(First);
};

int main()
{
	First f1;
	Second s1;
	f1.inpA();
	s1.inpB();
	s1.sum(f1);
return 0;
}
