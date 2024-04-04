#pragma once
#include <vector>
#include <optional>
#include "Lesson.h"

class Schedule {
public:
	Schedule();
	bool addLesson(const Lesson& lesson) const; // �������� ����
	Lesson& deleteLesson(const int day, const int number) const; // ������� ����
	// �������� ����������
	std::vector<std::vector<std::optional<Lesson>>>& getSchedule() const; 

private:
	std::vector<std::vector<std::optional<Lesson>>> _sch; // ����������
	const int maxCountDayLesson = 6; // ���� ����� ���� � ������ � ����
};

