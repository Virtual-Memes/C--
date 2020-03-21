#include <iostream>
#include <cmath>
using namespace std;
//创建Rectangle类
class Rectangle{
//属性public的成员函数
public:
    Rectangle(double& L_B_X,double& L_B_Y,double& R_T_X,double& R_T_Y);
    const double Area() const;
//属性private的成员变量
private:
    double Left_B_X;
    double Left_B_Y;
    double Right_T_X;
    double Right_T_Y;
};
int main(){
    //输入坐标
    double L_B_X,L_B_Y,R_T_X,R_T_Y;
    cout<<"请输入左下角x坐标：";
    cin>>L_B_X;
    cout<<"请输入左下角y坐标：";
    cin>>L_B_Y;
    cout<<"请输入右上角x坐标：";
    cin>>R_T_X;
    cout<<"请输入右上角y坐标：";
    cin>>R_T_Y;
    //创建Rectangle类的对象rectangle
    Rectangle rectangle(L_B_X,L_B_Y,R_T_X,R_T_Y);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"\n"<<"该矩形面积为："<<rectangle.Area();
    system("pause");
}
//构造函数主体，传递数值
Rectangle::Rectangle(double& L_B_X,double& L_B_Y,double& R_T_X,double& R_T_Y)
:Left_B_X(L_B_X),Left_B_Y(L_B_Y),Right_T_X(R_T_X),Right_T_Y(R_T_Y){}
//成员函数Area主体，返回面积
const double Rectangle::Area() const{
    return fabs(Right_T_X-Left_B_X)*fabs(Right_T_Y-Left_B_Y);
}