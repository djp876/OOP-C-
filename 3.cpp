//3. Dynamically allocating space for a pointer depending on input and doing this repeatedly,
//depending on different inputs and finally de-allocating the pointer. 
#include<iostream>
using namespace std;
int main()
{
int *ptr1=NULL;
ptr1=new int;
*ptr1=43;
float *ptr2=new float(52.1);
int *ptr3=new int[20];
cout<<"value of ptr1"<<"\t"<<*ptr1<<endl;
cout<<"value of ptr2"<<"\t"<<*ptr2<<endl;
cout<<"address of ptr1"<<ptr1<<endl;
cout<<"address of ptr2"<<ptr2<<endl;
if(!ptr3)
cout<<"failed to allocate"<<endl;
else
{
for(int i=10;i<15;i++)
ptr3[i]=i+1;
cout<<"values of blocks"<<endl;
for(int i=10;i<15;i++)
cout<<ptr3[i]<<endl;;
}
delete ptr1;
delete ptr2;
delete [] ptr3;
cout<<*ptr1;
return 0;
}
