#pragma once
#include <vector>
#include "Student.h"

/**
 * @brief класс группы студентов в учебном заведении
*/
class Group {
public:
	/**
	 * @brief конструктор
	 * @param id номер группы
	 * @param students список студентов, обучающихся в группе
	*/
	Group(const int id, std::vector<Student>& students);

	/**
	 * @brief добавить студента в список студентов
	 * @param student добавляемый студент
	*/
	void addStudent(const Student& student); 

	/**
	 * @brief удалить студента
	 * @param studentId номер студенческого удаляемого студента
	*/
	void deleteStudent(const int studentId); 

	/**
	 * @brief получить номер группы
	 * @return номер группы
	*/
	int getId() const; 

	/**
	 * @brief получить список студентов группы
	 * @return список студентов, обучающихся в группе
	*/
	std::vector<Student>& getStudents();

private:
	/**
	 * @brief номер группы
	*/
	int _id; 

	/**
	 * @brief список студентов, обучающихся в группе
	*/
	std::vector<Student> _students;
};