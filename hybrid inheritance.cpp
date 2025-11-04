#include<iostream>
using namespace std;
class person{
	public:
		void speak()
		{
			cout<<"person speaks"<<endl;
		}
};
class student:public person{
	public:
		void study()
		{
			cout<<"student is studying"<<endl;
		}
};
class employee{
	public:
		void work()
		{
			cout<<"employee is working"<<endl;
		}
};
class workingstudent:public student,public employee{
	public:
		void balance()
		{
			cout<<"working student balance work and study"<<endl;
		}
};
int main()
{
	workingstudent d;
	d.speak();
	d.speak();
	d.work();
	d.balance();
	return 0;
}
