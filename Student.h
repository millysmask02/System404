#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"


class Student : public People {
public:
	//Student();
	Student(const std::string& name, const std::string& surname, 
		    const std::string& patronymic, const int course);

	void setCourse(const int course); // задать курс
	void setGroup(const int group); // задать номер группы
	void addCourse(); // увеличивает курс на 1

	int getCourse() const; // получить курс
	int getGroup() const; // получить номер группы
	
	//void setObject(const std::vector<Object>& objects); // задать предметы

private:
	int _course; // курс
	int _group; // номер группы
};

