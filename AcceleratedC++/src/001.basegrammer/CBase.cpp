#include "CBase.h"

using std::string;
using std::cout;
using std::endl;

CBase::CBase() {
	this->id = 0;
	this->name = string();
}
CBase::CBase(int id, string name) {
	this->id = id;
	this->name = name;
}
CBase::~CBase() {
	cout<<"destructor called. the id is " << this->id << endl;
}
void CBase::setID(int id) {
	this->id = id;
}
void CBase::setName(string name) {
	this->name = name;
}
void CBase::disInfo() {
	cout << "id:\t" << this->id << endl;
	cout << "name:\t" << this->name << endl;
}
