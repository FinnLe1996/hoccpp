#include <iostream>
using namespace std;

int main()
{
    /*
    Đe Bai:
    Một người cần rút một số tiền T từ ngân hàng và muốn tổng số tờ ít nhất
    . Cho biết có các loại tiền mệnh giá 100, 20, 5 và 1.
     Nhập từ bàn phím  số tờ nhận được.a số tờ mỗi loại mệnh giá và tổng số tờ nhận được.
    */
    int T;
    int t100(0),t20(0),t5(0),t1(0);
    cout<<"Enter the amount money to take out: ";
    cin>>T;
    //Start processing
    for(int i=0;i<=T;i++)
    {
        if(T>=100)
        {
          T=T-100;
          t100++;
        }
    }
    for(int i=0;i<=T;i++)
    {
        if(T>=20)
        {
          T=T-20;
          t20++;
        }
    }
    for(int i=0;i<=T;i++)
    {
        if(T>=5)
        {
          T=T-5;
          t5++;
        }
    }
    t1=T;
    cout<<"you have "<<t100<<" sheet 100k & "<<t20<<" sheet 20k & "<<t5<<" sheet 5k & "<<t1<<" sheet 1k";
    //the end
    return 0;
}