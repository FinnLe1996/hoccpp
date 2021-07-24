#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //declare
    cout<<"Giai Phuong Trinh Bac 2: ax^2+bx+c=0\n";
    cout<<"Nhap A: ";
    float a,b,c,delta,x1,x2;
    cin>>a;
    cout<<"\nNhap B: ";
    cin>>b;
    cout<<"\nNhap C: ";
    cin>>c;
    //Begin Processing
    if(a==0)
       {
       	if(b==0)
       	   {
       		if(c==0)
       		{
       			cout<<"\nPhuong trinh vo so no\n";
			   }
			else
			cout<<"\nPhuong trinh vo no\n";
		   }
		 else if(b!=0)
		 {
		 	x1=-c*1.0/b;
		 	cout<<"\nPhuong trinh co mot no x= "<<x1;
		 }
	   }
	else if(a!=0)
	{
    delta=b*b-4*a*c;
    if(delta<0)
    {
     cout<<"\nPhuong trinh vo no";
    }
    if(delta>0)
    {
    	x1=(-b+sqrt(delta))/(2*a);
    	x2=(-b-sqrt(delta))/(2*a);
    cout<<"\n Phuong trinh co 2 no \n";
    cout<<"\n x1= "<<x1;
    cout<<"\n x2= "<<x2;
    }
    if(delta==0)
    {
    	x1=-b/(2*a);
    cout<<"\nPhuong Trinh co No Kep: x1=x2= "<<x1;
    }
}
    return 0;
}
