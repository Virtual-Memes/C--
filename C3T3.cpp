#include <iostream>
using namespace std;
class Rectangle{
public:
    Rectangle(double& L_B_X,double& L_B_Y,double& R_T_X,double& R_T_Y);
    void Area();
private:
    double Left_B_X;
    double Left_B_Y;
    double Right_T_X;
    double Right_T_Y;
};
void* SetAttribute();
int main(){
    double L_B_X,L_B_Y,R_T_X,R_T_Y;
    (*SetAttribute)();
    system("pause");
}
Rectangle::Rectangle(double& L_B_X,double& L_B_Y,double& R_T_X,double& R_T_Y)
:Left_B_X(L_B_X),Left_B_Y(L_B_Y),Right_T_X(R_T_X),Right_T_Y(R_T_Y){}
void Rectangle::Area(){

}
void* SetAttribute(){
    cout<<"123";
}