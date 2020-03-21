#include <iostream>
using namespace std;
//创建学生类
class Student{
//public声明的类成员函数
public:
    //构造函数
    Student();
    //析构函数
    ~Student();
 //private声明的类成员变量
private:
    string S_Number;//学号
    string S_Name;//姓名
    int S_Age;//年龄
};
int main(){
    //创建Student类的对象student
    Student student;
    return 0;
}
//构造函数的主体
Student::Student()
{
    cout<<"请输入学号：";
    cin>>S_Number;
    cout<<"\n"<<"请输入姓名：";
    cin>>S_Name;
    cout<<"\n"<<"请输入年龄(岁)：";
    cin>>S_Age;
}
//析构函数的主体
Student::~Student(){
    cout<<"\n"<<"该学生学号为："<<S_Number<<endl;
    cout<<"该学生姓名为："<<S_Name<<endl;
    cout<<"该学生年龄为："<<S_Age<<"岁"<<endl;
}