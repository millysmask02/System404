#pragma once
#include <vector>
#include <optional>
#include "Lesson.h"

class Schedule {
public:
	Schedule();
	bool addLesson(const Lesson& lesson) const; // добавить урок
	Lesson& deleteLesson(const int day, const int number) const; // удалить урок
	// получить расписание
	std::vector<std::vector<std::optional<Lesson>>>& getSchedule() const; 

private:
	std::vector<std::vector<std::optional<Lesson>>> _sch; // расписание
	const int maxCountDayLesson = 6; // макс колво дней и уроков в день
};

