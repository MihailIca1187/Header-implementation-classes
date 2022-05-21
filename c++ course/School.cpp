#include "School.h"

using namespace std;

int Student::get_ID() {
	return ID;
}

string Student::get_Name() {
	return name;
}

void Student::set_ID(int newId) {
	ID = newId;
}

void Student::set_Name(string newName) {
	name = newName;
}

int Course::get_ID() {
	return ID;
}

string Course::get_Name() {
	return name;
}

int8_t Course::get_credits() {
	return credits;
}

int Grade::get_student_id() {
	return student_id;
}

int Grade::get_course_id() {
	return course_id;
}

char Grade::get_grade() {
	return grade;
}