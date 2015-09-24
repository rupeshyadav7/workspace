
#include <iostream>
using namespace std;

class Global{

	int val;
	static Global * ptr;
	Global(int v = 0){
		val = v;
	}
public:
	int getVal();
	void setVal(int );
	void setVal(int& );
	static Global* getInstance();
};
Global * Global::ptr = 0;

int Global::getVal(){
	return val;
}

void Global::setVal(int v){
	val = v;
}
void Global::setVal(int& v){
	val = v;
}
Global * Global::getInstance(){
	if(!ptr)
		ptr = new Global();
	return ptr;
}

void foo(){
	cout << Global::getInstance()->getVal() << endl;
	Global::getInstance()->setVal(1);
	cout << Global::getInstance()->getVal() << endl;
}
int main(){
foo();
}
