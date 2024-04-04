#pragma once
#include "Group.h"
#include "Teacher.h"
#include "Object.h"

struct Lesson {
	Group group;
	Teacher teacher;
	Object object;
	int room;
};
