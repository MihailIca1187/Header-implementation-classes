#ifndef School_H
#define School_H
#include <iostream>

class Student {

public:
	int get_ID();

	std::string get_Name();

	void set_ID(int newId);

	void set_Name(std::string newName);

private:
	int ID;
	std::string name;
};

class Course {

public:
	int get_ID();

	std::string get_Name();

	int8_t get_credits();


private:
	int ID;
	std::string name;
	int8_t credits;
};

class Grade {

public:
	int get_student_id();

	int get_course_id();

	char get_grade();

private:
	int student_id;
	int course_id;
	char grade;
};

#endif