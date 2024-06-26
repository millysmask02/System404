#include "Student.h"
#include <cassert>

Student::Student(const std::string& name, const std::string& surname, 
	             const std::string& patronymic, const int course) {
	People(name, surname, patronymic);
	assert(course > 0 && course <= 4);
	_course = course;
}

void Student::setCourse(const int course) {
	assert(course > 0 && course <= 4);
	_course = course;
}

void Student::setGroup(const int group) {
	_group = group;
}

void Student::addCourse() {
	assert(_course < 4);
	_course++;
}

int Student::getCourse() const {
	return _course;
}

int Student::getGroup() const {
	return _group;
}
