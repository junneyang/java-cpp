#include <iostream>
#include <string>

using std::string;

class CBase {
	private:
		int id;
		string name;
	public:
		CBase();
		CBase(int id, string name);
		~CBase();
		void setID(int id);
		void setName(string name);
		void disInfo();
};
