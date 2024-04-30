#pragma once
#include "Group.h"
#include "Teacher.h"
#include "Object.h"

/**
 * @brief структура урока в учебном заведении
*/
struct Lesson {
	/**
	 * @brief группа, у которой будет урок
	*/
	Group group;
	/**
	 * @brief преподаватель, который проводит урок
	*/
	Teacher teacher;
	/**
	 * @brief предмет, по которому будет урок
	*/
	Object object;
	/**
	 * @brief аудитория, в которой будет урок
	*/
	int room;
};