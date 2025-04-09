#include "main.h"

class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	// default-constructor or constructor without argumnets
	Student() {
		cout << "Default-constructor..." << endl;
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}

	// constructor with arguments
	Student(string nm) {
		cout << "constructor with arguments..." << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}

	// constructor with arguments
	Student(string nm, int a) {
		cout << "constructor with arguments..." << endl;
		name = nm;
		age = a;
		mark = 4.0;
		alive = true;
	}

	// canonical-constructor
	Student(string nm, int a, double m, bool al) {
		cout << "canonical-constructor..." << endl;
		name = nm;
		age = a;
		mark = m;
		alive = al;
	}

	// copy-constructor
	Student(const Student& student) {
		cout << "copy-constructor..." << endl;
		name = student.name;
		age = student.age;
		mark = student.mark;
		alive = student.alive;
	}

	// destructor
	~Student() {
		cout << "destructor..." << endl;
	}

	string toString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", mark: " + to_string(mark);
		s += ", alive: ";
		s += (alive ? "yes" : "no");
		return s;
	}
};