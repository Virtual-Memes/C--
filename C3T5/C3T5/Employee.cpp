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
		cout << "������Ա��������";
		cin >> this->Name;
		cout << "������Ա�����ţ�";
		cin >> this->ID;
		cout << "������Ա���¹��ʣ�";
		cin >> this->Month_Salary;
		cout << endl;
		cout << "���ѳɹ���� " << "\"" << this->Name << "\"" << " Ϊ����ְλ��" << endl;
		cout << "TA��ְ����Ϊ��" << this->ID << endl;
		M_Count++;
	}
	const void Display() const {
		cout << "ְ��ID��" << this->ID << endl;
		cout << "ְ��������" << this->Name << endl;
		cout << "ְҵ������" << endl;
		cout << "���¹��ʣ�" << this->Month_Salary << " Ԫ\n" << endl;
	}
	void Modify() {

	}
	void Delete() {
		delete this;
	}
	~Manager() {
		cout << "����" << this->Name << "�ѱ���ְ��[�꥿����]" << "(����ID��" << this->ID<<")" <<"\n"<<endl;
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
		cout << "������Ա��������";
		cin >> this->Name;
		cout << "������Ա�����ţ�";
		cin >> this->ID;
		cout << "������Ա��ʱн��";
		cin >> this->Hour_Wage;
		cout << endl;
		cout << "���ѳɹ���� " << "\"" << this->Name << "\"" << " Ϊ����ְλ��" << endl;
		cout << "TA��ְ����Ϊ��" << this->ID << endl;
		T_Count++;
	}
	void Delete() {
		delete this;
	}
	const void Display() const{
		cout << "ְ��ID��" << this->ID << endl;
		cout << "ְ��������" << this->Name<< endl;
		cout << "ְҵ������" << endl;
		cout << "Сʱ���ʣ�" << this-> Hour_Wage<<" Ԫ/ʱ"<< endl;
		cout << "���¹�ʱ��" << this->Hours <<" ʱ"<< endl;
		cout << "���¹��ʣ�" << this->Hour_Wage*this->Hours <<" Ԫ\n"<<endl;
	}
	void Modify() {

	}
	~Technician() {
		cout << "������" << this->Name << "�ѱ���ְ��[�꥿����]" << "(����ID��" << this->ID << ")" << "\n" << endl;
		Member_Count--;
		T_Count--;
	}
private:
	int Hour_Wage;
	int Hours=0;
};