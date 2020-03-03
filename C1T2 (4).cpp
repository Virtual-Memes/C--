#include <iostream>
using namespace std;
//创建Task2类
class Task2 {
public:
	int Start, End;
	//Task2的构造函数
	Task2(int Start, int End) {
		this->Start = Start;
		this->End = End;
		cout << "ASCII 码从 32 到 127 的字符如下" << endl;
	}
	//Task2的析构函数
	~Task2() {
		for (int i = Start; i <= End; i++){
			char ch = i;
			cout << ch <<" ";
			if ((i - Start) % 12 == 0) {
				cout<<endl;
			}
		}
		cout<<endl;
	}
};
int main() {
	//实例化Task2的对象为T2
	Task2 T2(32,127);
	T2.~Task2();
	system("pause");
}