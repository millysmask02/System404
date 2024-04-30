#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"

/**
 * @brief класс студента в учебном заведении (человек)
*/
class Student : public People {
public:
	/**
	 * @brief конструктор
	 * @param name имя студента
	 * @param surname фамилия студента
	 * @param patronymic отчество студента
	 * @param course курс, на котором учится студент
	*/
	Student(const std::string& name, const std::string& surname, 
		    const std::string& patronymic, const int course);

	/**
	 * @brief задать курс студента
	 * @param course курс, на котором учится студент
	*/
	void setCourse(const int course); 

	/**
	 * @brief задать номер группы студента
	 * @param group номер группы, в которой учится студент
	*/
	void setGroup(const int group); 

	/**
	 * @brief увеличить курс на 1
	*/
	void addCourse(); 

	/**
	 * @brief получить курс
	 * @return курс, на котором учится студент
	*/
	int getCourse() const; 

	/**
	 * @brief получить номер группы
	 * @return номер группы, в которой учится студент
	*/
	int getGroup() const;

private:
	/**
	 * @brief курс, на котором учится студент
	*/
	int _course;

	/**
	 * @brief номер группы, в которой учится студент
	*/
	int _group; 
};