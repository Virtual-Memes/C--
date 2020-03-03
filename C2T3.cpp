#include <iostream>
using namespace std;
//构造Task3类
class Task3{
    int fib1=1;
    int fib2=1;
    int Max;
    public:
    //Task3的构造函数
    Task3(int Max){
        this->Max=Max;
        cout<<"小于"<<Max<<"的Fibonacci数"<<endl;
    }
    //Fib函数(打印Fibonicci数列)
    int Fib();
    ~Task3(){
        exit(1);
    }
};
int main(){
    //实例化Task3类为T3对象
    Task3 T3(100);
    T3.Fib();
    system("pause");
}
int Task3::Fib(){
    if(fib1>Max)
        return 0;
    cout<<fib1<<" ";
    fib1+=fib2;
    if(fib2>Max)
        return 0;
    cout<<fib2<<" ";
    fib2+=fib1;
    return Fib();
}