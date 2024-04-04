#pragma once
#include <vector>
#include "Student.h"

class Group {
public:
	Group(const int id, std::vector<Student>& students);

	void addStudent(const Student& student); // �������� ��������
	void deleteStudent(const int studentId); // ������� �������� �� id

	int getId() const; // �������� ����� ������
	std::vector<Student>& getStudents(); // �������� ������ ������

private:
	int _id; // ����� ������
	std::vector<Student> _students; // �������� ������
};

