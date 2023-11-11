#include<iostream>
#include <string>
using namespace std;
class input {
public:
	int age;
	char name[1000] = {'\0'};
	 char* p;
	int id;
public:

	void getinput(int x);








};

class student {
	char* name=nullptr;
	int age;
	int ID;
	int count = 0;

public:
	
	student(char* name, int age=0, int ID=0);
	student(const char* name="default user", int age=0, int ID=0);
	void setname(char* name);
	void setname(const char* name);
	void setage(int no);
	void setid(int id);

	int getage();
	 char* getname();
	int getid();

	~student();



};