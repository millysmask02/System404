#pragma once
#include <vector>
#include "Student.h"

/**
 * @brief ����� ������ ��������� � ������� ���������
*/
class Group {
public:
	/**
	 * @brief �����������
	 * @param id ����� ������
	 * @param students ������ ���������, ����������� � ������
	*/
	Group(const int id, std::vector<Student>& students);

	/**
	 * @brief �������� �������� � ������ ���������
	 * @param student ����������� �������
	*/
	void addStudent(const Student& student); 

	/**
	 * @brief ������� ��������
	 * @param studentId ����� ������������� ���������� ��������
	*/
	void deleteStudent(const int studentId); 

	/**
	 * @brief �������� ����� ������
	 * @return ����� ������
	*/
	int getId() const; 

	/**
	 * @brief �������� ������ ��������� ������
	 * @return ������ ���������, ����������� � ������
	*/
	std::vector<Student>& getStudents();

private:
	/**
	 * @brief ����� ������
	*/
	int _id; 

	/**
	 * @brief ������ ���������, ����������� � ������
	*/
	std::vector<Student> _students;
};