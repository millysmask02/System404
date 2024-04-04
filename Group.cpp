#include "Group.h"

Group::Group(const int id, std::vector<Student>& students) {
	_id = id;
	_students = students;
}

void Group::addStudent(const Student& student) {
	_students.push_back(student);
}

void Group::deleteStudent(const int studentId) {
	auto itStudent = _students.end();
	for (auto it = _students.begin(); it != _students.end(); it++) {
		if (it->getId() == studentId) {
			itStudent = it;
			break;
		}
	}
	if (itStudent != _students.end()) {
		_students.erase(itStudent);
	}
}

int Group::getId() const {
	return _id;
}

std::vector<Student>& Group::getStudents() {
	return _students;
}
