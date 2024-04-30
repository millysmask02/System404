#pragma once
#include <iostream>
#include <vector>
#include "Object.h"

/**
 * @brief базовый класс человека в учебном заведении
*/
class People {
public:
	/**
	 * @brief имя человека
	*/
	std::string name;

	/**
	 * @brief фамилия человека
	*/
	std::string surname;

	/**
	 * @brief отчество человека
	*/
	std::string patronymic;

	/**
	 * @brief конструктор по умолчанию (бесполезный)
	*/
	People();
	/**
	 * @brief конструктор (менее бесполезный)
	 * @param name имя человека
	 * @param surname фамилия человека
	 * @param patronymic отчество человека
	*/
	People(const std::string& name, const std::string& surname,
		const std::string& patronymic);

	/**
	 * @brief задать номер пропуска
	 * @param id номер пропуска
	*/
	virtual void setId(const int id); 

	/**
	 * @brief получить номер пропуска
	 * @return номер пропуска
	*/
	virtual int getId() const; 

	/**
	 * @brief добавить предмет в список предметов
	 * @param object добавляемый в список предметов предмет
	*/
	virtual void addObject(const Object& object); 

	/**
	 * @brief удалить предмет из списка предметов
	 * @param object удаляемый из списка предметов предмет
	*/
	virtual void deleteObject(const Object& object); 

	/**
	 * @brief получить список предметов
	 * @return список предметов
	*/
	virtual std::vector<Object>& getObjects(); 

protected:
	/**
	 * @brief номер пропуска человека 
	*/
	int _id;

	/**
	 * @brief список предметов человека
	*/
	std::vector<Object> _objects; 
};