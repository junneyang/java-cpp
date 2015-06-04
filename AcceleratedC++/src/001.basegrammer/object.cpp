#include <sstream>
#include <vector>
#include <algorithm>
#include <functional>
#include "CBase.h"

using namespace std;

bool compare(int a,int b)
{
	//升序排列，如果改为return a>b，则为降序
	return a > b;
}

int main() {
	cout << "栈中创建对象,系统自动回收空间" << endl;
	CBase c(123456, "junne,yang");
	c.disInfo();
	
	cout << "堆中new对象,程序负责空间回收" << endl;
	CBase *cbase = new CBase(654321, "junne,yang");
	cbase->disInfo();
	delete cbase;
	
	cout << "堆中new对象数组,程序负责空间回收" << endl;
	const int SIZE = 10;
	int flag = 10;
	CBase *baseArr = new CBase[SIZE];
	for(int i = 0; i < SIZE; i++) {
		baseArr[i].setID(flag + i);
		stringstream sstr;
		sstr << flag + i;
		baseArr[i].setName(sstr.str());
	}
	for(int i = 0; i < SIZE; i++) {
		baseArr[i].disInfo();
	}
	delete []baseArr;
	
	cout << "栈中创建对象数组,系统自动回收空间" << endl;
	flag = 20;
	CBase baseArrNew[SIZE];
	for(int i = 0; i < SIZE; i++) {
		baseArrNew[i].setID(flag + i);
		stringstream sstr;
		sstr << flag + i;
		baseArrNew[i].setName(sstr.str());
	}
	for(int i = 0; i < SIZE; i++) {
		baseArrNew[i].disInfo();
	}
	
	cout << "栈中创建对象数组,使用指针操作,系统自动回收空间,不能使用delete" << endl;
	flag = 30;
	CBase baseArrNewNew[SIZE];
	CBase *cbaseArrNew = baseArrNewNew;
	for(int i = 0; i < SIZE; i++) {
		cbaseArrNew[i].setID(flag + i);
		stringstream sstr;
		sstr << flag + i;
		cbaseArrNew[i].setName(sstr.str());
	}
	for(int i = 0; i < SIZE; i++) {
		cbaseArrNew[i].disInfo();
	}
	
	cout << "堆中创建对象指针数组-是数组其元素是指针,程序负责空间回收" << endl;
	flag = 40;
	CBase* p[SIZE];
	for(int i = 0; i < SIZE; i++) {
		stringstream sstr;
		sstr << flag + i;
		p[i] = new CBase(flag + i, sstr.str());
	}
	for(int i = 0; i < SIZE; i++) {
		p[i]->disInfo();
	}
	for(int i = 0; i < SIZE; i++) {
		delete p[i];
	}
	
	cout << "堆中创建对象指针vector,程序负责空间回收" << endl;
	flag = 50;
	vector<CBase*> v;
	for(int i = 0; i < SIZE; i++) {
		stringstream sstr;
		sstr << flag + i;
		v.push_back(new CBase(flag + i, sstr.str()));
	}
	for(int i = 0; i < SIZE; i++) {
		v[i]->disInfo();
	}
	/*for(int i = 0; i < SIZE; i++) {
		delete v[i];
	}*/
	vector<CBase*>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		delete *it;
	}
	
	cout << "vector的使用" << endl;
	vector<int> vi;
	vi.push_back(12);
	vi.push_back(10);
	vi.push_back(18);
	vi.push_back(19);
	vi.push_back(25);
	vi.push_back(4);
	vector<int>::iterator itt;
	for(itt = vi.begin(); itt != vi.end(); itt++) {
		cout << *itt << " ";
	}
	cout << endl;
	sort(vi.begin(), vi.end(), compare);
	for(itt = vi.begin(); itt != vi.end(); itt++) {
		cout << *itt << " ";
	}
	cout << endl;
	return 0;
}
