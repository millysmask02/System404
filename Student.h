#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"

/**
 * @brief ����� �������� � ������� ��������� (�������)
*/
class Student : public People {
public:
	/**
	 * @brief �����������
	 * @param name ��� ��������
	 * @param surname ������� ��������
	 * @param patronymic �������� ��������
	 * @param course ����, �� ������� ������ �������
	*/
	Student(const std::string& name, const std::string& surname, 
		    const std::string& patronymic, const int course);

	/**
	 * @brief ������ ���� ��������
	 * @param course ����, �� ������� ������ �������
	*/
	void setCourse(const int course); 

	/**
	 * @brief ������ ����� ������ ��������
	 * @param group ����� ������, � ������� ������ �������
	*/
	void setGroup(const int group); 

	/**
	 * @brief ��������� ���� �� 1
	*/
	void addCourse(); 

	/**
	 * @brief �������� ����
	 * @return ����, �� ������� ������ �������
	*/
	int getCourse() const; 

	/**
	 * @brief �������� ����� ������
	 * @return ����� ������, � ������� ������ �������
	*/
	int getGroup() const;

private:
	/**
	 * @brief ����, �� ������� ������ �������
	*/
	int _course;

	/**
	 * @brief ����� ������, � ������� ������ �������
	*/
	int _group; 
};