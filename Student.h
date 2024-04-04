#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"


class Student : public People {
public:
	//Student();
	Student(const std::string& name, const std::string& surname, 
		    const std::string& patronymic, const int course);

	void setCourse(const int course); // ������ ����
	void setGroup(const int group); // ������ ����� ������
	void addCourse(); // ����������� ���� �� 1

	int getCourse() const; // �������� ����
	int getGroup() const; // �������� ����� ������
	
	//void setObject(const std::vector<Object>& objects); // ������ ��������

private:
	int _course; // ����
	int _group; // ����� ������
};

