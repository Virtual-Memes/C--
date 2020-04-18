#include <iostream>
#include <cassert>
using namespace std;
class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}
	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}
	~Point() { cout<<"Destructor called."<<endl; }
	int getX() const { return x; }
	int getY() const { return y; }
	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};
class ArrayOfPoints {	//动态数组类
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}
	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}
	Point& element(int index) {
		assert(index >= 0 && index < size);	

		//返回为&或对象
		return points[index];

		//返回为指针
		/*
		return points+index;
		*/
	}
private:
	Point *points;	//指向动态数组首地址
	int size;		//数组大小
};
int main(){
    int count;
    cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints points(count);	//创建对象数组

	//element为Point&引用返回型，或Point返回型
	//通过访问数组元素的成员
	points.element(0).move(5, 0);
	//通过类访问数组元素的成员
	points.element(1).move(15, 20);

	//element为Point*指针返回型
	/*
	//通过访问数组元素的成员
	points.element(0)->move(5, 0);
	//通过类访问数组元素的成员
	points.element(1)->move(15, 20);
	*/

    system("pause");
	return 0;
}