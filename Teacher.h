#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"

/**
 * @brief ����� ������������� � ������� ��������� (�������)
*/
class Teacher : public People {
public:
	/**
	 * @brief ����������� 
	 * @param name ��� �������������
	 * @param surname ������� �������������
	 * @param patronymic �������� �������������
	*/
	Teacher(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	/**
	 * @brief �������� ������ � ������ ����� �������������
	 * @param group ����������� ������ � ������ �����
	*/
	void addGroup(const int group); 

	/**
	 * @brief ������� ������ �� ������ �����
	 * @param group ��������� ������
	*/
	void deleteGroup(const int group); 

	/**
	 * @brief �������� ������ ����� �������������
	 * @return ������ ����� �������������
	*/
	std::vector<int>& getGroups(); 

private:
	/**
	 * @brief ������ �����, � �������� �������� �������������
	*/
	std::vector<int> _groups; 
};