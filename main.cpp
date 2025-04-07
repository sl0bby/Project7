#include "Teacher.h"


void change(Student student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10;
	student.alive = false;
}

int main() {
	Student* list = nullptr;
	int size;

	cout << "Input nubmer of students: ";
	cin >> size;

	list = new Student[size];

	cout << "Input data of students: ";
	for (int i = 0; i < size; i++)
	{

		cout << ""
		cout << "name: ";
		cin >> list[i].name;

		cout << "age: ";
		cin >> list[i].age;

		cout << "average mark: ";
		cin >> list[i].mark;

		cout << "alive: ";
		cin >> list[i].alive;
		char answer;
		cin >> answer;

		list[i].alive = islower(answer) == 'y';
	}

	Teacher teacher;

	Student result = teacher.getAllBestStudents(list, size);

	string msg = result.alive ? "Best student is " + result.name : "No best students";

	cout << msg;

	return 0;
} 