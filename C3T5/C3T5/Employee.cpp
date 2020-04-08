#include <iostream>
using namespace std;
class Employee{
public:
	static int Member_Count;
protected:
	string Name="Unknown";
	string ID="Unknown";
};
class Manager:protected Employee{
public:
	static int M_Count;
	Manager() {
		Member_Count++;
	}
	void Add() {
		cout << "请输入员工姓名：";
		cin >> this->Name;
		cout << "请设置员工工号：";
		cin >> this->ID;
		cout << "请设置员工月工资：";
		cin >> this->Month_Salary;
		cout << endl;
		cout << "您已成功添加 " << "\"" << this->Name << "\"" << " 为经理职位！" << endl;
		cout << "TA的职工号为：" << this->ID << endl;
		M_Count++;
	}
	const void Display() const {
		cout << "职工ID：" << this->ID << endl;
		cout << "职工姓名：" << this->Name << endl;
		cout << "职业：经理" << endl;
		cout << "当月工资：" << this->Month_Salary << " 元\n" << endl;
	}
	void Modify() {

	}
	void Delete() {
		delete this;
	}
	~Manager() {
		cout << "经理：" << this->Name << "已被撤职！[リタイヤ]" << "(工号ID：" << this->ID<<")" <<"\n"<<endl;
		Member_Count--;
		M_Count--;
	}
private:
	int Month_Salary;
};
class Technician:protected Employee{
public:
	static int T_Count;
	Technician() {
		Member_Count++;
	}
	void Add() {
		cout << "请输入员工姓名：";
		cin >> this->Name;
		cout << "请设置员工工号：";
		cin >> this->ID;
		cout << "请设置员工时薪：";
		cin >> this->Hour_Wage;
		cout << endl;
		cout << "您已成功添加 " << "\"" << this->Name << "\"" << " 为技工职位！" << endl;
		cout << "TA的职工号为：" << this->ID << endl;
		T_Count++;
	}
	void Delete() {
		delete this;
	}
	const void Display() const{
		cout << "职工ID：" << this->ID << endl;
		cout << "职工姓名：" << this->Name<< endl;
		cout << "职业：技工" << endl;
		cout << "小时工资：" << this-> Hour_Wage<<" 元/时"<< endl;
		cout << "当月工时：" << this->Hours <<" 时"<< endl;
		cout << "当月工资：" << this->Hour_Wage*this->Hours <<" 元\n"<<endl;
	}
	void Modify() {

	}
	~Technician() {
		cout << "技工：" << this->Name << "已被撤职！[リタイヤ]" << "(工号ID：" << this->ID << ")" << "\n" << endl;
		Member_Count--;
		T_Count--;
	}
private:
	int Hour_Wage;
	int Hours=0;
};