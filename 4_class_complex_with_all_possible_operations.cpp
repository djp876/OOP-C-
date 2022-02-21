//Define class complex with all possible operations: constructor, destructor,
//copy constructor, assignment operator with the data members stored as pointer to integers
#include<iostream>>
using namespace std;
class complex{
	
	public:
	int *real;
	int *image;
	complex(int *a, int *b){
		real=a;
		image=b;
	}
	void display(){
		cout<<*real<<" "<<*image<<endl;
	}
	complex(){
		cout<<"object destroyed\n";
	}
};
void add(complex c1,complex c2){
	cout<<*c1.real+*c2.real<<"+"<<*c1.image+*c2.image<<"i"<<endl;
}
void subt(complex c1,complex c2){
	cout<<"("<<*c1.real-*c2.real<<")+("<<*c1.image-*c2.image<<")i"<<endl;
}
void mult(complex c1, complex c2){
	int a,b,c,d;
	a=*c1.real;
	b=*c2.real;
	c=*c1.image;
	d=*c2.image;
	cout<<"("<<(a*b)-(c*d)<<")+("<<a*d+b*c<<")i"<<endl;
}
void divide(complex c1, complex c2){
	int a,b,c,d,temp;
	a=*c1.real;
	b=*c2.real;
	c=*c1.image;
	d=*c2.image;
	temp=(c*c)-(d*d);
	cout<<"("<<(a*b)-(c*d)<<")+("<<((a*d+b*c)/temp)<<")i"<<endl;
}
int main()
{
	int q1=2,q2=3,q3=4,q4=5;
	complex p1(&q1,&q2);
	complex num2(&q3,&q4);
	add (p1,num2);
	subt (p1,num2);
	mult (p1,num2);
	divide (p1,num2);
	return 0;
}
