#include "Student.h"


void change(Student student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10;
	student.alive = false;
}

int main() {
	Student st1, temp;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	temp = st1;



	cout << "Before: " << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;

	//change(st1);
	st1.name = "Vova";

	cout << "After: " << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;

	//string name = st1.mark > st2.mark ? st1.name : st2.name;
	//Student t = st1.mark > st2.mark ? st1 : st2;

	//cout << "Best students name is " << temp.name << endl;
	
	return 0;
} 