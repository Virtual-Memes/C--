#include "All.h"
#include "Employee.h"
//对静态成员变量赋初值
int Employee::Member_Count = 0;
int Manager::M_Count = 0;
int Technician::T_Count = 0;
//创建vector_s类操作vector存储
class vector_s {
private:
	vector<Manager*> Vmanager;
	vector<Manager*>::iterator M_iterator;
	vector<Technician*> Vtechnician;
	vector<Technician*>::iterator T_iterator;
public:
	void Employing();
	void V_All();
	void Retire();
	void Choose();
};
//主函数
int main() {
	vector_s s;
	s.Choose();
}
//招募选项选取
void vector_s::Employing() {
	system("cls");
	cout << "当前有：\n经理：" << Manager::M_Count << " 名，技工：" << Technician::T_Count << " 名。\n共：" << Employee::Member_Count << " 人" << endl;
	cout << "请选择你要添加的职位：(经理M，技工T)";
	char Job = _getch();
	cout << endl;
	if (Job == 'M' || Job == 'm') {
		Manager* manager = new Manager();
		manager->Add();
		Vmanager.push_back(manager);
	}
	else if (Job == 'T' || Job == 't') {
		Technician* technician = new Technician();
		technician->Add();
		Vtechnician.push_back(technician);
	}
	else
	{
		system("cls");
		cout << "无效选项！";
		Sleep(2000);
		Employing();
	}
	cout << "当前有：\n经理：" << Manager::M_Count << " 名，技工：" << Technician::T_Count << " 名。\n共：" << Employee::Member_Count << " 人" << endl;
	Choose();
}
//展示所有的成员信息
void vector_s::V_All() {
	system("cls");
	cout << "当前有：\n经理：" << Manager::M_Count << " 名，技工：" << Technician::T_Count << " 名。\n共：" << Employee::Member_Count << " 人" << endl;
	//迭代器遍历Vmanager并展示信息
	cout << "\n经理职位人员详情：\n" << endl;
	for (M_iterator = Vmanager.begin(); M_iterator != Vmanager.end(); M_iterator++) {
		(*M_iterator)->Display();
	}
	//迭代器遍历Vtechician并展示信息
	cout << "\n技工职位人员详情：\n" << endl;
	for (T_iterator = Vtechnician.begin(); T_iterator != Vtechnician.end(); T_iterator++) {
		(*T_iterator)->Display();
	}
	Choose();
}
//删除人员
void vector_s::Retire() {
	system("cls");
	cout << "当前有：\n经理：" << Manager::M_Count << " 名，技工：" << Technician::T_Count << " 名。\n共：" << Employee::Member_Count << " 人\n" << endl;
	cout << "请输入你要撤职的员工ID：";
	string Des_ID;
	cin >> Des_ID;
	bool Deleted = false;
	//迭代器遍历Manager的指针对象，执行操作
	for (M_iterator = Vmanager.begin(); M_iterator != Vmanager.end(); M_iterator++) {
		if ((*M_iterator)->ID == Des_ID) {
			Manager* Temp_M;
			Temp_M = *M_iterator;
			Vmanager.erase(M_iterator);
			Deleted = true;
			Temp_M->Delete();
			break;
		}
	}
	//迭代器遍历Techician的指针对象，执行操作
	for (T_iterator = Vtechnician.begin(); T_iterator != Vtechnician.end(); T_iterator++) {
		if ((*T_iterator)->ID == Des_ID) {
			Technician* Temp_T;
			Temp_T = *T_iterator;
			Vtechnician.erase(T_iterator);
			Deleted = true;
			Temp_T->Delete();
			break;
		}
	}
	//提示是否删除成功
	if (Deleted) {
		cout << "成功撤职员工：" << "ID-" << Des_ID << endl;
	}
	else {
		cout << "未查询到该员工!" << endl;
	}
	Choose();
}
//进行方法选取，并循环操作
void vector_s::Choose() {
	cout << "(E/e->招募人员，V/v->查看所有人员信息，R/r->撤除人员，Esc->退出程序)\n请选择接下来的操作：";
	char CH = _getch();
	system("cls");
	switch (CH)
	{
	case 'E': {
		Employing();
		break;
	}
	case 'e': {
		Employing();
		break;
	}
	case 'V': {
		V_All();
		break;
	}
	case 'v': {
		V_All();
		break;
	}
	case 'R': {
		Retire();
		break;
	}
	case 'r': {
		Retire();
		break;
	}
	case 27: {
		exit(0);
		break;
	}
	default: {
		cout << "无效选项！";
		Sleep(2000);
		system("cls");
		Choose();
		break;
	}
	}
}