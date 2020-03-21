#include "Fn.h"
int main() {
	int n, r;
	cout << "请输入数字的总个数：";
	cin >> n;
	cout << "请输入抽取数字的个数：";
	cin >> r;
	Fn fn(n, r);
	cout << "\n" << "共有 " << fn.GetResult() << " 种可能";
}