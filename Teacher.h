#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "People.h"

/**
 * @brief класс преподавателя в учебном заведении (человек)
*/
class Teacher : public People {
public:
	/**
	 * @brief конструктор 
	 * @param name имя преподавателя
	 * @param surname фамилия преподавателя
	 * @param patronymic отчество преподавателя
	*/
	Teacher(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	/**
	 * @brief добавить группу в список групп преподавателя
	 * @param group добавляемая группа в список групп
	*/
	void addGroup(const int group); 

	/**
	 * @brief удалить группу из списка групп
	 * @param group удаляемая группа
	*/
	void deleteGroup(const int group); 

	/**
	 * @brief получить список групп преподавателя
	 * @return список групп преподавателя
	*/
	std::vector<int>& getGroups(); 

private:
	/**
	 * @brief список групп, с которыми работает преподаватель
	*/
	std::vector<int> _groups; 
};