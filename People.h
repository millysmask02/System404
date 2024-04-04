#pragma once
#include <iostream>
#include <vector>
#include "Object.h"

class People {
public:
	std::string name;
	std::string surname;
	std::string patronymic;
	People();
	People(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	virtual void setId(const int id); // задать номер пропуска
	virtual int getId() const; // получить номер пропуска

	virtual void addObject(const Object& object); // добавить предмет
	virtual void deleteObject(const Object& object); // удалить предмет
	virtual std::vector<Object>& getObjects(); // получить список предметов

protected:
	int _id; // номер пропуска
	std::vector<Object> _objects; // список предметов
};

