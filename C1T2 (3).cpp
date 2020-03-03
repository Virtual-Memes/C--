#include <iostream>
using namespace std;
//创建Task1类
class Task1 {
public:
	int DataSize[8];
	string DataType[8] = {"void","bool","int","float","double","char","wchar_t","string"};
	//Task1的构造函数
	Task1() {
		void* p;
		cout << "共有8种数据类型" << "\n\n" << endl;
		DataSize[0] = sizeof(p);
		DataSize[1] = sizeof(bool);
		DataSize[2] = sizeof(int);
		DataSize[3] = sizeof(float);
		DataSize[4] = sizeof(double);
		DataSize[5] = sizeof(char);
		DataSize[6] = sizeof(wchar_t);
		DataSize[7] = sizeof(string);
	}
	//Task1的析构函数
	~Task1()
	{
		for (int i = 0; i < 8; i++) {
			if (i == 0) {
				cout << "\n" << DataType[i] << " 类型若为指针则占 " << DataSize[i] << " 字节" << endl;
			}
			else{
				cout << "\n" << DataType[i] << " 类型占 " << DataSize[i] << " 字节" << endl;
			}
		}
	}
};
int main() {
	//实例化Task1的对象为T1
	Task1 T1;
	T1.~Task1();
	system("pause");
}