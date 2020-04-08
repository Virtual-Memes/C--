#include "All.h"
#define M_Max 20;
#define T_Max 100;
int Employee::Member_Count = 0;
int Manager::M_Count = 0;
int Technician::T_Count = 0;
Manager *manager[20];
Technician* technician[100];
int main() {
	while (true)
	{
		cout << "请选择你要添加的职位：(经理M，技工T)";
		char Job = _getch();
		cout << endl;
		if (Job == 'M' || Job == 'm') {
			manager[Manager::M_Count] = new Manager();
			manager[Manager::M_Count]->Add();
		}
		else if (Job == 'T' || Job== 't') {
			technician[Technician::T_Count] = new Technician();
			technician[Technician::T_Count]->Add();
		}
	}
}