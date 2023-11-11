#include "interface.h"

int sizef(const char* x) {
	int i = 0;
	while (*(x + i) != '\0')
	{	i++;
	}
	return i;

}
student::student( char* name, int age, int ID) {
	this->setname(name);
	this->age = age;
	this->ID = ID;
	
	



}

student::student(const char* x, int age, int id) {
	
	this->setname(x);
	this->age = age;
	this->ID = id;


}
void student::setage(int no) {
	if(no>0)
	this->age = no;

}
void student::setid(int no) {
	if(no>0)
	this->ID= no;

}
void student::setname(char* name) {

	
	int n = sizef(name);
	this->name = new char[n + 1];
	for (int i = 0; i < n; i++) {
		*(this->name + i) = *(name + i);

	}


	*(this->name + n) = '\0';
	
	



}
void student::setname(const char * name) {
	char* k = (this->name);
	int n = sizef(name);
	this->name = new char[n + 1];
	for (int i = 0; i < n; i++) {
		*(this->name + i) = *(name + i);
		
	}
	if (k != nullptr)
		delete[] k;
	
	*(this->name+n) = '\0';
	
	
}
char* student::getname() {

	return (this->name);
}

int student:: getage() {
	return (this->age);

}

int student::getid() {
	return this->ID;

}
student:: ~student() {
	
//delete[] (this->name);



}


void input::getinput(int x) {


	cout << endl << "enter the number of student number " << x+1;
	cin >> (this->id);
	cout << endl << "enter the name of student number " << x+1;
	cin >> (this->name);
	cout << endl << "enter the age of student number " << x+1;
	cin >> (this->age);
	this->p = name;
}