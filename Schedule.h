#pragma once
#include <vector>
#include <optional>
#include "Lesson.h"

class Schedule {
public:
	Schedule();
	bool addLesson(const Lesson& lesson, const int day, const int number); // �������� ����
	Lesson& deleteLesson(const int day, const int number); // ������� ����
	// �������� ����������
	std::vector<std::vector<std::optional<Lesson>>>& getSchedule(); 

private:
	std::vector<std::vector<std::optional<Lesson>>> _sch; // ����������
	const int maxCountDayLesson = 6; // ���� ����� ���� � ������ � ����
};

