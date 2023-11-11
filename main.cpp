#include"interface.h"
int main() {
	

	const int size = 4;
	student** p = new student *[size];

	for (int i = 0; i < size;i++) {
		if (i % 2 == 0) {  // using this to use different types of constructor
			input user;
			user.getinput(i);
			*((p)+i) = new student(user.p, user.age, user.id);
		}
		else {
		
			*((p)+i) = new student("nouser");
		
		}
	
	
	
	}
	

	for (int i = 0; i < size; i++) {
	
		cout << endl << (*(p+i))->getname()<< "   " << (*(p + i))->getid() << "   " << (*(p + i))->getage();
	}


	


}