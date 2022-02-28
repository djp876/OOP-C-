//1. Parameter passing: passing parameter by value vs by reference, passing array as constant pointer 
#include<iostream>
using namespace std;
void swap(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"After Swapping Value of A="<<a<<"\tB="<<b<<"\n";
}
void swapref (int &num1, int &num2)
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
        cout<<"After Swapping Value of A="<<num1<<"\tB="<<num2<<"\n";
}
void swapvalue (int *x, int *y)
{
 int c;
 c=*x;
 *x=*y;
 *y=c;
}
int main()
{
        int a,b;
        cout<<"Enter Value Of A,B:";
        cin>>a>>b;
        cout<<"Before Swapping value of A="<<a<<"\tB="<<b<<"\n";
        swapvalue(&a,&b);
        cout<<"After swapping:"<<a<<" "<<b<<endl;
        swapref(a,b);
        cout<<"After swapping A="<<a<<"\t"<<"B="<<b<<endl;
        swap(a,b);
        return 0;
}
