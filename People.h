#pragma once
#include <iostream>
#include <vector>
#include "Object.h"

/**
 * @brief ������� ����� �������� � ������� ���������
*/
class People {
public:
	/**
	 * @brief ��� ��������
	*/
	std::string name;

	/**
	 * @brief ������� ��������
	*/
	std::string surname;

	/**
	 * @brief �������� ��������
	*/
	std::string patronymic;

	/**
	 * @brief ����������� �� ��������� (�����������)
	*/
	People();
	/**
	 * @brief ����������� (����� �����������)
	 * @param name ��� ��������
	 * @param surname ������� ��������
	 * @param patronymic �������� ��������
	*/
	People(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	/**
	 * @brief ������ ����� ��������
	 * @param id ����� ��������
	*/
	virtual void setId(const int id); 

	/**
	 * @brief �������� ����� ��������
	 * @return ����� ��������
	*/
	virtual int getId() const; 

	/**
	 * @brief �������� ������� � ������ ���������
	 * @param object ����������� � ������ ��������� �������
	*/
	virtual void addObject(const Object& object); 

	/**
	 * @brief ������� ������� �� ������ ���������
	 * @param object ��������� �� ������ ��������� �������
	*/
	virtual void deleteObject(const Object& object); 

	/**
	 * @brief �������� ������ ���������
	 * @return ������ ���������
	*/
	virtual std::vector<Object>& getObjects(); 

protected:
	/**
	 * @brief ����� �������� �������� 
	*/
	int _id;

	/**
	 * @brief ������ ��������� ��������
	*/
	std::vector<Object> _objects; 
};