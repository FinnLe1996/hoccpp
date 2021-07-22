#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int dong,cot;
    cout<<"Nhap Dong:";
    cin>>dong;
    cout<<"Nhap Cot. ";
    cin>>cot;
    int M[dong][cot];
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            M[i][j]=rand()%100;
        }
    }
    cout<<"Mang Sau Khi Nhap:\n";
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
           // cout<<"M["<<i<<"]["<<j<<"]= "<<M[i][j]<<endl;
           cout<<M[i][j]<<"\t";
        }
        cout<<"\n";
    }
    /*
    Function Input Rows
	Begin */
    cout<<"Ban Muon Xuat Dong Nao::";
    int r;
    cin>>r;
    for(int i=0;i<dong;i++)
    cout<<M[r][i]<<"\t";
    cout<<"\nBan Muon Xuat Cot Nao";
    int c;
    cin>>c;
    for(int i=0;i<cot;i++)
    cout<<M[i][c]<<"\t";
    if(dong==cot)
    {
    	cout<<"\n Xuat Ðuong Cheo Chinh"<<endl;
    	for(int i=0;i<dong;i++)
    	cout<<M[i][i]<<"\t";
    	cout<<"\n Xuat Ðuong Cheo Phu"<<endl;
    	for(int i=0;i<cot;i++)
    	cout<<M[i][dong-i-1]<<"\t";
    	
	}
 /* 
       Update Function Search Value
       Author:FinnLe
       
       
       
   cout<<"Tim Kiem Gia Tri: ";
    int k;
    cin>>k;
    int kt;
    for(int i=0;i<dong;i++)
    {
    	for(int j=0;j<cot;j++)
    	{
    	if(k==M[i][j])
    	{
    		kt++;
    		
			}
	    }
	}
	if(kt>0)
	{
		cout<<"\t GT "<<k<<" Duoc Tim Thay"<< kt <<" lan"<<endl;
	}
	else
	cout<<"\tKhong Tim Thay Gia Tri:"<<k<<endl; */
	
/*
           FAILLED
           FAILLED
           FAILLED
           Author:FinnLe;


	cout<<"Mang Sau Khi Sap Xep(Bubbles Soft):\n";
	for(int i=0;i<dong-1;i++)
    
	{
    	for(int j=0;j<cot-1;j++)
    	{
    		for(int h=i+1;h<dong;h++)
    		{
    			for(int d=j+1;d<cot;d++)
    			{
    				if(M[i][j]>M[h][d])
    				{
    					int t=M[i][j];
    					M[i][j]=M[h][d];
    					M[h][d]=t;
					}
				}
			}
		}
	}
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			cout<<M[i][j]<<"\t";
		}
	} */
    return 0;
}
