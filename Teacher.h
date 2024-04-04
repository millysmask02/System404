#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"


class Teacher : public People {
public:
	Teacher(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	void addGroup(const int group); // �������� ������
	void deleteGroup(const int group); // ������� ������

	std::vector<int>& getGroups(); // �������� ������ �����
	// ������ ��� ������ ���������
	// ������ ��� ������ �����

private:
	std::vector<int> _groups; // ������ �����
};

