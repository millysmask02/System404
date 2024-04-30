#pragma once
#include <vector>
#include <optional>
#include "Lesson.h"

/**
 * @brief ����� ���������� ������� � ������� ���������
*/
class Schedule {
public:
	/**
	 * @brief ����������� �� ���������
	*/
	Schedule();
	
	/**
	 * @brief �������� ���� � ����������
	 * @param lesson ����������� ����
	 * @param day ����, � ������� ������ ���� ����
	 * @param number ����� ����� � ����������
	 * @return true - ���� ���� ������� ���������, false - ���� ���� ���� � ����� ����� ��� ������
	*/
	bool addLesson(const Lesson& lesson, const int day, const int number); 

	/**
	 * @brief ������� ���� �� ����������
	 * @param day ����, � �������� ������� ����
	 * @param number ����� ���������� ����� � ����������
	 * @return ����, ������� ������ �� ����������
	*/
	Lesson& deleteLesson(const int day, const int number); 

	/**
	 * @brief �������� ����������
	 * @return ���������� ������� � ������� ���������
	*/
	std::vector<std::vector<std::optional<Lesson>>>& getSchedule(); 

private:
	/**
	 * @brief ���������� ������� � ������� ��������� 
	*/
	std::vector<std::vector<std::optional<Lesson>>> _sch;

	/**
	 * @brief ������������ ���������� ������� ���� � ������ � ���� 
	*/
	const int maxCountDayLesson = 6; 
};