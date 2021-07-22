#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
    cout<<"Nhap So Phan Tu Trong Mang M[n]:  ";
    cin>>n;
    int M[n];
    cout<<"\n Nhap Gia Tri Cho Cac Phan Tu:  \n";
    for(int i=0;i<n;i++)
    {
    	cout<<"M["<<i<<"]=  ";
		cin>>M[i];
	}	
	cout<<"Gia Tri Phan Tu Ban Da Nhap:\n";
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]= "<<M[i]<<endl;
	}
	cout<<"\n--------------------\n";
	cout<<"Ban Muon Tim Kien Gia Tri:\n";
	int k;
	int kt(0);
	cout<<"Nhap Gia Tri Muon Tim Kiem: ";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(k==M[i])
		{
			kt++;
		}
		//cout<<"\nHe Thong Da Tim Thay Gia Tri "<<k<<" xuat hien "<<kt<<" lan trong Mang";
	}
	if(kt>0)
	{
	cout<<"\nHe Thong Da Tim Thay Gia Tri "<<k<<" xuat hien "<<kt<<" lan trong Mang";
    }
    else
		cout<<"\nKhong Tim Thay Gia Tri "<<k<<" trong Mang";
	return 0;
}
