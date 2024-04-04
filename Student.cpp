#include "Student.h"

Student::Student(const std::string& name, const std::string& surname, 
	             const std::string& patronymic, const int course) {
	People(name, surname, patronymic);
	_course = course;
}

void Student::setCourse(const int course) {
	_course = course;
}

void Student::setGroup(const int group) {
	_group = group;
}

void Student::addCourse() {
	_course++;
}

int Student::getCourse() const {
	return _course;
}

int Student::getGroup() const {
	return _group;
}
