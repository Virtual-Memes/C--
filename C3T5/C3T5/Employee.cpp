#include "All.h"
using namespace std;
class Employee{
public:
	static int Member_Count;
	string Name="Unknown";
	string ID="Unknown";
};
class Manager:public Employee{
public:
	static int M_Count;
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
		Member_Count++;
		M_Count++;
	}
	const void Display() const {
		cout << "ְ��ID��" << this->ID << endl;
		cout << "ְ��������" << this->Name << endl;
		cout << "ְҵ������" << endl;
		cout << "���¹��ʣ�" << this->Month_Salary << " Ԫ\n" << endl;
	}
	void Delete() {
		Member_Count--;
		M_Count--;
		delete this;
	}
	~Manager() {
		cout << "����" << this->Name << "�ѱ���ְ��[�꥿����]" << "(����ID��" << this->ID<<")" <<"\n"<<endl;
	}
private:
	int Month_Salary;
};
class Technician:public Employee{
public:
	static int T_Count;
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
		Member_Count++;
		T_Count++;
	}
	void Delete() {
		Member_Count--;
		T_Count--;
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
	~Technician() {
		cout << "������" << this->Name << "�ѱ���ְ��[�꥿����]" << "(����ID��" << this->ID << ")" << "\n" << endl;
	}
private:
	int Hour_Wage;
	int Hours=0;
};