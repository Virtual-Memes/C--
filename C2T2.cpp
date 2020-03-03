#include <iostream>
#include <cmath>
using namespace std;
//构造Task2函数
class Task2{
    public:
    double x,y;
    //Task2的构造函数
    Task2(){
        cout<<"请输入底数x：";
        cin>>x;
        cout<<"\n\n请输入指数y：";
        cin>>y;
        cout<<"\n\n结果为："<<pow(x,y);
        
    }
    //Task2的析构函数
    ~Task2(){
        exit(1);
    }
};
int main(){
    //设置精度
    cout.setf(ios::fixed);
    cout.precision(2);
    //实例化Task2为T2
    Task2 T2;
    system("pause");
}