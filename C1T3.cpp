#include <iostream>
using namespace std;
//创建Task5类
class Task5 {
public:
	int Amount_Ball;
	int Times_Try;
	int Diff;
	//Task5的构造函数
	Task5(int Amount_Ball,int Times_Try) {
		this->Amount_Ball=Amount_Ball;
		this->Times_Try=Times_Try;
		int UP_Number=1;
		int BENEATH_Number=1;
		for(int i=0;i<Times_Try;i++){
			UP_Number*=(Amount_Ball-i);
			BENEATH_Number*=(i+1);
		}
		Diff=UP_Number/BENEATH_Number;
		cout<<"从红、黄、蓝、白、黑五种颜色的球中随机抽取三个球。"<<endl;
	}
	//Task5的析造函数
	~Task5() {
		cout<<"共有 "<<Diff<<" 种可能。"<<"\n"<<endl;
	}
};
int main() {
	//实例化Task5的对象为T5
	Task5 T5(5,3);
	T5.~Task5();
	system("pause");
}