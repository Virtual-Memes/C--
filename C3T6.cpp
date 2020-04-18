#include <iostream>
#include <cmath>
using namespace std;
//定义类Point包含设置，展示点的函数
class Point{
public:
    //提示对象已生成
    Point(int count):count(count){
        cout<<"Object "<<count<<" is constructed!"<<endl;
    }
    void Set();
    void Display();
    //提示对象已销毁
    ~Point(){
        cout<<"Object "<<count<<" is destructed!"<<endl;
    }
private:
    int count;
    float X;
    float Y;
    //友元函数Length，用于计算折线总长
    friend float Length(Point *P[]);
};
//用于销毁对象
void Delete(Point *p[]);
int main(){
    //创建指向Point类的对象指针，大小10
    Point *p[10];
    //逐一对对象进行初始化
    for(int i=0;i<10;i++){
        p[i]=new Point(i+1);
        p[i]->Set();
        p[i]->Display();
    }
    //设置输出格式
    cout.precision(3);
    cout.setf(ios::fixed);
    //调用Length函数计算折线总长度
    cout<<"The length of all is "<<Length(p)<<"\n"<<endl;
    //调用Delete函数销毁对象
    Delete(p);
    system("pause");
}
//设置点对象的位置
void Point::Set(){
    cout<<"Please input the value of X-axis:";
    cin>>X;
    cout<<"Please input the value of Y-axis:";
    cin>>Y;
}
//显示点对象的信息
void Point::Display(){
    cout<<"Current is object "<<count<<endl;
    cout<<"Position is: "<<"("<<X<<","<<Y<<")"<<"\n"<<endl;
}
//Length友元函数主体
float Length(Point *P[]){
    float length=0;
    for(int i=1;i<10;i++){
        length+=sqrt(pow(P[i]->X-P[i-1]->X,2)+pow(P[i]->Y-P[i-1]->Y,2));
    }
    return length;
}
//Delete函数主体
void Delete(Point *p[]){
    for(int i=0;i<10;i++){
        delete p[i];
    }
}