#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;
typedef vector<int>::size_type v_size;

int mid(vector<int> &v) {
	v_size size = v.size();
	if(size == 0) {
		cout << "vector size is 0, ignore." << endl;
		throw domain_error("Exception: vector size is 0");
	}
	sort(v.begin(), v.end());
	v_size mid = size/2;
	return size%2 == 0 ? (v[mid] + v[mid-1])/2 : v[mid];
}

int main() {
	cout << "函数示例-vector传递地址调用-效率较高，不需要复制" << endl;
	vector<int> v;
	v.push_back(12);
	v.push_back(10);
	v.push_back(18);
	v.push_back(19);
	v.push_back(25);
	v.push_back(4);
	v.push_back(27);
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	int a = 0;
	try {
		a = mid(v);
	} catch (const domain_error& e) {
		cout << e.what() << endl;
	}
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	cout << "mid num : " << a << endl;
	
	cout << "函数示例-list与vector比较" << endl;
	list<int> l;
	l.push_back(12);
	l.push_back(10);
	l.push_back(18);
	l.push_back(19);
	l.push_back(25);
	l.push_back(4);
	l.push_back(27);
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	return 0;
}
