#pragma once
#include <vector>
#include <optional>
#include "Lesson.h"

/**
 * @brief класс расписания занятий в учебном заведении
*/
class Schedule {
public:
	/**
	 * @brief конструктор по умолчанию
	*/
	Schedule();
	
	/**
	 * @brief добавить урок в расписание
	 * @param lesson добавляемый урок
	 * @param day день, в которой должен быть урок
	 * @param number номер урока в расписании
	 * @return true - если урок успешно добавился, false - если этот день и номер урока уже заняты
	*/
	bool addLesson(const Lesson& lesson, const int day, const int number); 

	/**
	 * @brief удалить урок из расписания
	 * @param day день, с которого удаляем урок
	 * @param number номер удаляемого урока в расписании
	 * @return урок, который убрали из расписания
	*/
	Lesson& deleteLesson(const int day, const int number); 

	/**
	 * @brief получить расписание
	 * @return расписание занятий в учебном заведении
	*/
	std::vector<std::vector<std::optional<Lesson>>>& getSchedule(); 

private:
	/**
	 * @brief расписание занятий в учебном заведении 
	*/
	std::vector<std::vector<std::optional<Lesson>>> _sch;

	/**
	 * @brief максимальное количество учебных дней и уроков в день 
	*/
	const int maxCountDayLesson = 6; 
};