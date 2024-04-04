#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"


class Teacher : public People {
public:
	Teacher(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	void addGroup(const int group); // добавить группу
	void deleteGroup(const int group); // удалить группу

	std::vector<int>& getGroups(); // получить список групп
	// сеттер для списка предметов
	// сеттер для списка групп

private:
	std::vector<int> _groups; // список групп
};

