#include <iostream>
#include <windows.h>
using namespace std;
//创造类Date
class Date{
//public声明的类成员函数
public:
    Date();//构造函数
    void Date_display() const;
    void Modify_Mode();
    void Date_Reset();
    void Date_Push();
    void Adjust();
 //private声明的类成员变量
private:
    Date *Pdate;//Date类的对象指针Pdate
    int Year;
    int Month;
    int Day;
    //Date类的友元函数Date_Set
    friend int Date_Set(Date* date);
};
int main(){
    Date date;//创建类Date的对象date
    system("pause");
}
//友元函数的主体，判断是否对日期进行修改
int Date_Set(Date* date){
    char Definition;
    cin>>Definition;
    if(Definition=='Y'||Definition=='y'){
        date->Modify_Mode();
    }else if(Definition=='N'||Definition=='n'){
       return 0; 
    }else{
        cout<<"输入不符！";
        Sleep(3000);
        date->Date_display();
    }
    return 0;
}
//Date类构造函数主体，设置初始日期，并通过this指针将此对象地址赋予指针Pdate
Date::Date()
{
    Pdate=this;
    cout<<"请设置年份：";
    cin>>Year;
    cout<<"请设置月份：";
    cin>>Month;
    cout<<"请设置日期：";
    cin>>Day;
    Date_display();
}
//成员函数Date_display主体，显示日期并进入下一步骤
void Date::Date_display() const{
    cout<<"\n"<<"-------------------------------------------"<<endl;
    cout<<"当前日期为："<<Year<<"年"<<Month<<"月"<<Day<<"日"<<endl;
    cout<<"是否对日期进行更改？(Y[是]/N[否]):";
    Date_Set(Pdate);
}
//成员函数Modify_Mode主体，选择修改日期方式
void Date::Modify_Mode(){
    cout<<"\n"<<"-------------------------------------------"<<endl;
    cout<<"请选择你的修改模式(R[重设]/P[翌日]):";
    char Choose;
    cin>>Choose;
    if(Choose=='R'||Choose=='r'){
        Date_Reset();
    }else if(Choose=='P'||Choose=='p'){
        Date_Push();
    }else{
        cout<<"输入不符！";
        Sleep(3000);
        Modify_Mode();
    }
}
//成员函数Date_Reset主体,用于设置新的日期
void Date::Date_Reset(){
    cout<<"\n"<<"-------------------------------------------"<<endl;
    cout<<"请重新设置年份：";
    cin>>Year;
    cout<<"请重新设置月份：";
    cin>>Month;
    cout<<"请重新设置日期：";
    cin>>Day;
    Date_display();
}
//成员函数Date_Push主体，用于推进日期一天
void Date::Date_Push(){
    Day++;
    Adjust();
    Date_display();
}
//成员函数Adjust主体，用于调整日期结构
void Date::Adjust(){
    if(Month==1||Month==3||Month==5||Month==7||Month==8||Month==10||Month==12){
        if (Day>31){
            Day=1;
            Month+=1;
        }
    }
    else if(Month==4||Month==6||Month==9||Month==11){
        if(Day>30){
            Day=1;
            Month+=1;
        }
    }
    else if(Month==2){
        if((Year%4==0&&Year%100!=0)||Year%400==0){
            if (Day>29)
            {
                Day=1;
                Month+=1;
            }
        }
        else
        {
            if(Day>28){
                Day=1;
                Month+=1;
            }
        }  
    }
    if (Month>12)
    {
        Month=1;
        Year+=1;
    }
}