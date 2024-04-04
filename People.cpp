#include "People.h"
#include <algorithm>

People::People()
{
}

People::People(const std::string& name, const std::string& surname,
	           const std::string& patronymic) {
	this->name = name;
	this->surname = surname;
	this->patronymic = patronymic;
}

void People::setId(const int id) {
	_id = id;
}

int People::getId() const {
	return _id;
}

void People::addObject(const Object& object) {
	_objects.push_back(object);
}

void People::deleteObject(const Object& object) {
	auto it = std::find(_objects.begin(), _objects.end(), object);
	if (it != _objects.end()) {
		_objects.erase(it);
	}
}

std::vector<Object>& People::getObjects() {
	return _objects;
}
