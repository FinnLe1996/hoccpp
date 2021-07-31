#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	cout<<"Phan Mem Tinh Don Hang\n";
	cout<<"Nhap Ten Hang: ";
	string tenhang;
	getline(cin, tenhang);
	cout<<"\nNhap So Luong: ";
	int sl;
	cin>>sl;
	cout<<"\nNhap Don Gia (k/1cai) :";
	int dg;
	cin>>dg;
	cout<<endl;
	long tt=sl*dg;
	cout<<setw(30)<<left<<"| TEN_HANG |";
	cout<<setw(30)<<left<<"| SO_LUONG |";
	cout<<setw(35)<<left<<"| DON_GIA |";
	cout<<setw(20)<<right<<"| THANH_TIEN (k)|";
	cout<<endl;
	cout<<setfill('_');
	cout<<setw(120)<<"_"<<endl;
	cout<<setfill(' ');
	cout<<endl;
	cout<<setw(30)<<left<<tenhang;
	cout<<setw(30)<<left<<sl;
	cout<<setw(35)<<left<<dg;
	cout<<setw(20)<<right<<tt<<"k";
	cout<<endl;
	cout<<"So Tien Khach Da Tra: ";
	long dtt;
	cin>>dtt;
	long sd = dtt-tt,t=sd;
	int a500(0),a200(0),a100(0);
	int a50(0),a20(0),a10(0);
	int a5(0),a2(0),a1(0);

Again:
	
	if(sd>=500)
	{
		a500++;
		sd-=500;
		goto Again;
	}
	else if(sd>=200)
	{
		a200++;
		sd-=200;
		goto Again;
	}
	else if(sd>=100)
	{
		a100++;
		sd-=100;
		goto Again;
	}
	else if(sd>=50)
	{
		a50++;
		sd-=50;
		goto Again;
	}
	else if(sd>=20)
	{
		a20++;
		sd-=20;
		goto Again;
	}
	else if(sd>=10)
	{
		a10++;
		sd-=10;
		goto Again;
	}
	else if(sd>=5)
	{
		a5++;
		sd-=5;
		goto Again;
	}
	else if(sd>=2)
	{
		a2++;
		sd-=2;
		goto Again;
    }
    else if(sd>=1)
	{
		a1++;
		sd-=1;
		goto Again;
	}
	else if(sd<1)
	{
    cout<<"\nSo Tien Phai Thoi Cho Khach Hang :"<<t<<" k";
    cout<<endl;
	cout<<a500<<" to 500000\n";
	cout<<a200<<" to 200000\n";
	cout<<a100<<" to 100000\n";
	cout<<a50<<" to 50000\n";
	cout<<a20<<" to 20000\n";
	cout<<a10<<" to 10000\n";
	cout<<a5<<" to 5000\n";
	cout<<a2<<" to 2000\n";
	cout<<a1<<" to 1000\n";
}
	return 0;
}
