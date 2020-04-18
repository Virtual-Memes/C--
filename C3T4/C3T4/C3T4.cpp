#include "Fn.h"
//主函数
int main() {
	//提示输入
	int n, r;
	cout << "请输入数字的总个数：";
	cin >> n;
	cout << "请输入抽取数字的个数：";
	cin >> r;
	//创建Fn的对象fn
	Fn fn(n, r);
	//调用GetResult函数返回结果
	cout << "\n" << "共有 " << fn.GetResult() << " 种可能";
}