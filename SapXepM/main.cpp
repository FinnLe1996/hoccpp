#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	cout<<"Moi Nhap So Phan Tu Cho Mang: ";
	int n;
	cin>>n;
	int M[n];
//	cout<<"\nMoi Nhap Gia Tri Cho Phan Tu: \n";
	for(int i=0;i<n;i++)
	{
	//	cout<<"M["<<i<<"] =";
	//	cin>>M[i];
	M[i]=rand()%100;
	} 
	
	cout<<"\n Gia Tri Ban Da Nhap\n";
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"] = "<<M[i]<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		    if(M[i]>M[j])
		    {
			int t=M[i];
			M[i]=M[j];
			M[j]=t;
		}
		}
	}
	cout<<"GT Sau Khi Sap Xep:\n";
		for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"] = "<<M[i]<<endl;
	}
	return 0;
}
