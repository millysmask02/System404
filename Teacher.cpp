#include "Teacher.h"

Teacher::Teacher(const std::string& name, const std::string& surname,
	const std::string& patronymic) {
	People(name, surname, patronymic);
}

void Teacher::addGroup(const int group) {
	_groups.push_back(group);
}

void Teacher::deleteGroup(const int group) {
	auto it = std::find(_groups.begin(), _groups.end(), group);
	if (it != _groups.end()) {
		_groups.erase(it);
	}
}

std::vector<int>& Teacher::getGroups() {
	return _groups;
}


