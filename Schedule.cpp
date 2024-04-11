#include "Schedule.h"
#include <cassert>

Schedule::Schedule() {
	std::optional<Lesson> lesson;
	_sch.resize(maxCountDayLesson);
	for (int i = 0; i < maxCountDayLesson; i++) {
		_sch[i].resize(maxCountDayLesson);
		for (int j = 0; j < maxCountDayLesson; j++) {
			_sch[i][j] = lesson;
		}
	}
}

bool Schedule::addLesson(const Lesson& lesson, const int day, const int number) {
	if (_sch[day][number].has_value()) {
		return false;
	}
	else {
		_sch[day][number] = std::optional<Lesson>(lesson);
		return true;
	}
}

Lesson& Schedule::deleteLesson(const int day, const int number) {
	assert(_sch[day][number].has_value() == true);
	Lesson* les = &_sch[day][number].value();
	_sch[day][number].reset();
	return *les;
}

std::vector<std::vector<std::optional<Lesson>>>& Schedule::getSchedule() {
	return _sch;
}
