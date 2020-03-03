#include <iostream>
using namespace std;
//创建Task3类
class Task3 {
public:
    int Score;
	//Task3的构造函数
	Task3() {
        cout<<"请输入你的成绩(单位:分)：";
        cin>>Score;
	}
	//Task3的析构函数
	~Task3() {
        if(Score>100||Score<0){
            cout<<"\n"<<"请输入有效成绩！！！";
        }else{
			cout<<"\n"<<"你的成绩评级为：";
			if(Score>=90){
				cout<<"优！";
			}else if(Score>=80){
				cout<<"良！";
			}else if(Score>=60){
				cout<<"中！";
			}
			else{
				cout<<"差！";
			}
		}
		cout<<endl;
	}
};
int main() {
	//实例化Task3的对象为T3
	Task3 T3;
	T3.~Task3();
	system("pause");
}