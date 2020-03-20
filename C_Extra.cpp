#include <iostream>
#include <conio.h>
using namespace std;
class Test
{
public:
    int Num[5];
public:
    Test(int Count);
    void Avg();
    void Avg(int Num1);
    void Avg(int Num1,int Num2);
    void Avg(int Num1,int Num2,int Num3);
    void Avg(int Num1,int Num2,int Num3,int Num4);
    void Avg(int Num1,int Num2,int Num3,int Num4,int Num5);
    ~Test();
};
int main(){
    cout.precision(2);
    cout.setf(ios::fixed);
    int Count=0;
    Test T(Count);
    switch (Count)
    {
    case 0:
        T.Avg();
    case 1:
        T.Avg(T.Num[0]);
        break;
    case 2:
        T.Avg(T.Num[0],T.Num[1]);
        break;
    case 3:
        T.Avg(T.Num[0],T.Num[1],T.Num[2]);
        break;
    case 4:
        T.Avg(T.Num[0],T.Num[1],T.Num[2],T.Num[3]);
        break;
    case 5:
        T.Avg(T.Num[0],T.Num[1],T.Num[2],T.Num[3],T.Num[4]);
        break;
    default:
        break;
    }
}
Test::Test(int Count)
{
    while (scanf("%d",Num+Count)!=EOF)
    {
        Count++;
        if(kbhit()){
            if(_getch()=='P'||_getch()=='p'){
                break;
            }
        }
        if(Count>4){
            break;
        }
    }
}
void Avg(){
    cout<<"你输入了0个数"<<endl;
    cout<<"无平均值";
}
void Avg(int Num1){
    float avg=(float)(Num1)/1;
    cout<<"你输入了1个数"<<endl;
    cout<<"平均值为: "<<avg;
}
void Avg(int Num1,int Num2){
    float avg=(float)(Num1+Num2)/2;
    cout<<"你输入了2个数"<<endl;
    cout<<"平均值为: "<<avg;
}
void Avg(int Num1,int Num2,int Num3){
    float avg=(float)(Num1+Num2+Num3)/3;
    cout<<"你输入了3个数"<<endl;
    cout<<"平均值为: "<<avg;
}
void Avg(int Num1,int Num2,int Num3,int Num4){
    float avg=(float)(Num1+Num2+Num3+Num4)/4;
    cout<<"你输入了4个数"<<endl;
    cout<<"平均值为: "<<avg;
}
void Avg(int Num1,int Num2,int Num3,int Num4,int Num5){
    float avg=(float)(Num1+Num2+Num3+Num4+Num5)/5;
    cout<<"你输入了5个数"<<endl;
    cout<<"平均值为: "<<avg;
}
Test::~Test()
{
    exit(0);
}