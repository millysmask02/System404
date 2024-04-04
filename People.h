#pragma once
#include <iostream>
#include <vector>
#include "Object.h"

class People {
public:
	std::string name;
	std::string surname;
	std::string patronymic;
	People();
	People(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	virtual void setId(const int id); // ������ ����� ��������
	virtual int getId() const; // �������� ����� ��������

	virtual void addObject(const Object& object); // �������� �������
	virtual void deleteObject(const Object& object); // ������� �������
	virtual std::vector<Object>& getObjects(); // �������� ������ ���������

protected:
	int _id; // ����� ��������
	std::vector<Object> _objects; // ������ ���������
};

