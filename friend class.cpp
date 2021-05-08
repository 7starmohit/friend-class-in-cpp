#include<iostream>
using namespace std;
int res=0,rup=0;

class complex;

class calculator
{
	public:
		int add(int a,int b)
		{
			return(a+b);
		}
		
		int sum_real_complex(complex,complex);
		int sum_comp_complex(complex,complex);
		
};
class complex{
	int a;
	int b;
	public:
		void set_data(int w1,int w2)
		{
			a=w1;
			b=w2;
		}
		
		int friend calculator::sum_real_complex(complex,complex);
		int friend calculator::sum_comp_complex(complex,complex);
		void printdata(void)
		{
			cout<<"the complex number is :"<<a<<" + "<<b<<"i"<<endl;
		}
};

int calculator::sum_real_complex(complex q1,complex q2)
{
	return(q1.a+q2.a);	
}
int calculator::sum_comp_complex(complex q1,complex q2)
{
	return(q1.b+q2.b);
}

int main()
{
	
	complex q1,q2;
	q1.set_data(1,2);
	q2.set_data(3,7);
	calculator calc;
	
	int res= calc.sum_real_complex(q1,q2);
	cout<<"the real sum values of a and b is :"<<res<<endl;
	
	int rup=calc.sum_comp_complex(q1,q2);
	cout<<"The imaginary sum of a and b is:"<<rup<<endl;
	
	return 0;
	
	
}
