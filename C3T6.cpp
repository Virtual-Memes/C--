#include <iostream>
#include <cmath>
using namespace std;
class Point{
public:
    Point(int count):count(count){
        cout<<"Object "<<count<<" is constructed!"<<endl;
    }
    void Set();
    void Display();
    ~Point(){
        cout<<"Object "<<count<<" is destructed!"<<endl;
    }
private:
    int count;
    float X;
    float Y;
    friend float Length(Point *P[]);
};
void Delete(Point *p[]);
int main(){
    Point *p[10];
    for(int i=0;i<10;i++){
        p[i]=new Point(i+1);
        p[i]->Set();
        p[i]->Display();
    }
    cout.precision(3);
    cout.setf(ios::fixed);
    cout<<"The length of all is "<<Length(p)<<"\n"<<endl;
    Delete(p);
    system("pause");
}
void Point::Set(){
    cout<<"Please input the value of X-axis:";
    cin>>X;
    cout<<"Please input the value of Y-axis:";
    cin>>Y;
}
void Point::Display(){
    cout<<"Current is object "<<count<<endl;
    cout<<"Position is: "<<"("<<X<<","<<Y<<")"<<"\n"<<endl;
}
float Length(Point *P[]){
    float length=0;
    for(int i=1;i<10;i++){
        length+=sqrt(pow(P[i]->X-P[i-1]->X,2)+pow(P[i]->Y-P[i-1]->Y,2));
    }
    return length;
}
void Delete(Point *p[]){
    for(int i=0;i<10;i++){
        delete p[i];
    }
}