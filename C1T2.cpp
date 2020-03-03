#include <iostream>
using namespace std;
//创建Task4类
class Task4 {
public:
	int Max;
	//Task4的构造函数
	Task4(int Max) {
		this->Max=Max;
	}
	//while方式
	void While();
	//do-while方式
	void Do_While();
	//for方式
	void For();
	//Task4的析构函数
	~Task4() {
		cout<<"程序结束！"<<endl;
	}
};
int main() {
	//实例化Task4的对象为T4
	Task4 T4(100);
	T4.While();
	T4.Do_While();
	T4.For();
	T4.~Task4();
	system("pause");
}
//while方式
void Task4::While(){
	cout<<"以 while 方式找出 1-100 内的质数(详见代码)"<<"\n"<<endl;
	int i=1;
	while (i<Max)
	{
		i++;
		int j=1;
		while (j<i)
		{
			j++;
			if(i%j==0&&j!=1&&j!=i){
				break;
			}else if(i==j){
				cout<<i<<" ";
			}
		}
	}
	cout<<"\n"<<"-----------------------------"<<"\n"<<endl;
}
//do-while方式
void Task4::Do_While(){
	cout<<"以 do-while 方式找出 1-100 内的质数(详见代码)"<<"\n"<<endl;
	int i=1;
	do{
		i++;
		int j=1;
		do{
			j++;
			if(i%j==0&&j!=1&&j!=i){
				break;
			}else if(i==j){
				cout<<i<<" ";
			}
		}while(j<i);
	}while(i<Max);
	cout<<"\n"<<"-----------------------------"<<"\n"<<endl;
}
//for方式
void Task4::For(){
	cout<<"以 for 方式找出 1-100 内的质数(详见代码)"<<"\n"<<endl;
	for(int i=2;i<=Max;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0&&j!=1&&j!=i){
				break;
			}else if(i==j){
				cout<<i<<" ";
			}
		}
	}
	cout<<endl;
}