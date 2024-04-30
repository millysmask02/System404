#pragma once
#include "Group.h"
#include "Teacher.h"
#include "Object.h"

/**
 * @brief ��������� ����� � ������� ���������
*/
struct Lesson {
	/**
	 * @brief ������, � ������� ����� ����
	*/
	Group group;
	/**
	 * @brief �������������, ������� �������� ����
	*/
	Teacher teacher;
	/**
	 * @brief �������, �� �������� ����� ����
	*/
	Object object;
	/**
	 * @brief ���������, � ������� ����� ����
	*/
	int room;
};