#include <iostream>
using namespace std;
//构造Task1类
class Task1{
    public:
    double max1;
    //构建重载函数Max1函数返回最大值
        void Max1();
        void Max1(int Int_1,int Int_2);
        void Max1(int Int_1,int Int_2,int Int_3);
        void Max1(double Double_1,double Double_2);
        void Max1(double Double_1,double Double_2,double Double_3);
    //Task2的析构函数
    ~Task1(){
        exit(1);
    };
};
int main(){
    //实例化Task1为对象T1
    Task1 T1;
    //设置精度
    cout.setf(ios::fixed);
    cout.precision(6);
    T1.Max1(3,5);
    T1.Max1(4,8,6);
    T1.Max1(6.56,3.9);
    T1.Max1(2.6,3.21,4.95);
    system("pause");
}
void Task1::Max1(int Int_1,int Int_2){
    cout<<"输入的两个整数为:"<<Int_1<<" 和 "<<Int_2<<endl;
    if(Int_1>Int_2){
        max1=Int_1;
    }else{
        max1=Int_2;
    }
    cout<<"最大的整数为:"<<(int)max1<<endl;
    cout<<endl;
}
void Task1::Max1(int Int_1,int Int_2,int Int_3){
    cout<<"输入的三个整数为:"<<Int_1<<" , "<<Int_2<<" 和 "<<Int_3<<endl;
    if(Int_1>Int_2){
        if(Int_1>Int_3){
            max1=Int_1;
        }else{
            max1=Int_3;
        }
    }else{
        if(Int_2>Int_3){
            max1=Int_2;
        }else{
            max1=Int_3;
        } 
    }
    cout<<"最大的整数为:"<<(int)max1<<endl;
    cout<<endl;
}
void Task1::Max1(double Double_1,double Double_2){
    cout<<"输入的两个双精度浮点数为:"<<Double_1<<" 和 "<<Double_2<<endl;
    if(Double_1>Double_2){
        max1=Double_1;
    }else{
        max1=Double_2;
    }
    cout<<"最大的双精度浮点数为:"<<max1<<endl;
    cout<<endl;
}
void Task1::Max1(double Double_1,double Double_2,double Double_3){
    cout<<"输入的三个双精度浮点数为:"<<Double_1<<" , "<<Double_2<<" 和 "<<Double_3<<endl;
    if(Double_1>Double_2){
        if(Double_1>Double_3){
            max1=Double_1;
        }else{
            max1=Double_3;
        }
    }else{
        if(Double_2>Double_3){
            max1=Double_2;
        }else{
            max1=Double_3;
        } 
    }
    cout<<"最大的双精度浮点数为:"<<max1<<endl;
    cout<<endl;
}