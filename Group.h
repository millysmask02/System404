#pragma once
#include <vector>
#include "Student.h"

class Group {
public:
	Group(const int id, std::vector<Student>& students);

	void addStudent(const Student& student); // добавить студента
	void deleteStudent(const int studentId); // удалить студента по id

	int getId() const; // получить номер группы
	std::vector<Student>& getStudents(); // получить список группы

private:
	int _id; // номер группы
	std::vector<Student> _students; // студенты группы
};

