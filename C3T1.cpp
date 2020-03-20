#include <iostream>
using namespace std;
class Student{
public:
    Student();
    ~Student();
private:
    string S_Number;
    string S_Name;
    int S_Age;
};
int main(){
    Student student;
    return 0;
}
Student::Student()
{
    cout<<"请输入学号：";
    cin>>S_Number;
    cout<<"\n"<<"请输入姓名：";
    cin>>S_Name;
    cout<<"\n"<<"请输入年龄(岁)：";
    cin>>S_Age;
}
Student::~Student(){
    cout<<"\n"<<"该学生学号为："<<S_Number<<endl;
    cout<<"该学生姓名为："<<S_Name<<endl;
    cout<<"该学生年龄为："<<S_Age<<"岁"<<endl;
}