#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
cout<<"Chuong Trinh So Xo:\n";
cout<<"Vui long du doan so: ";
int number,n=6;
cin>>number;
int M[n];
for(int i=0;i<n;i++)
{
    M[i]=rand()%100;
}

cout<<"\nKet Qua Sau Khi Quay So La:\n";
int kq(0);
for(int i=0;i<n;i++)
{
if(M[i]== number)
{
    kq++;

}
}
if(kq>0)
{
    cout<<"Chuc Mung Ban Da Du Doan Dung:\n";
    cout<<"Ket Qua Vong Quay:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<M[i]<<"\t";
    }
}
else
{
    cout<<"Ban Du Doan Sai Chuc Ban May Man Lan Sau:\n";
    cout<<"Ket Qua Vong Quay:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<M[i]<<"\t";
    }
}


return 0;
}
