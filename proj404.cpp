#include <iostream>
#include <vector>
#include "Student.h"
#include "Object.h"
#include "Group.h"
#include "Teacher.h"
#include "Lesson.h"
#include "Schedule.h"

int main() {
	Student Misha("Misha", "Sidorov", "Ivanovich", 1);
	Misha.setId(1234);
	Misha.setGroup(5);
	Misha.addObject(Object::Math);
	Misha.addObject(Object::IT);
	Misha.addObject(Object::Phylosophy);

	Student Tixon("Tixon", "Kotov", "Kotanovich", 1);
	Tixon.setId(5432);
	Tixon.setGroup(5);
	Tixon.addObject(Object::Math);
	Tixon.addObject(Object::IT);
	Tixon.addObject(Object::History);

	std::vector<Student> students{ Misha, Tixon };

	Group MyGroup(5, students);
	MyGroup.deleteStudent(Tixon.getId());
	
	Tixon.setGroup(1);
	std::vector<Student> st1 = { Tixon };
	Group MyGroup1(1, st1);


	Student Vasiliy("Vasiliy", "Zagorin", "Georgievich", 1);
	Vasiliy.setId(1542);
	Vasiliy.setGroup(4);
	Vasiliy.addObject(Object::History);
	Vasiliy.addObject(Object::Economy);
	Vasiliy.addObject(Object::Phylosophy);
	std::vector<Student> st4 = { Vasiliy };
	Group MyGroup4(4, st4);

	Teacher Masha("Masha", "Kotova", "Petrovna");
	Masha.setId(1000);
	Masha.addObject(Object::Math);
	Masha.addObject(Object::IT);
	Masha.addObject(Object::History);
	Masha.addObject(Object::Economy);
	Masha.addObject(Object::Phylosophy);
	Masha.addGroup(5);
	Masha.addGroup(1);
	Masha.addGroup(4);
	
	Lesson p1 = { MyGroup1, Masha, Object::IT, 101 };
	Lesson p2 = { MyGroup1, Masha, Object::History, 102 };
	Lesson p3 = { MyGroup1, Masha, Object::Math, 103 };



	Schedule sch;
	sch.addLesson(p1, 1, 1);
	sch.addLesson(p2, 1, 2);
	sch.addLesson(p3, 1, 3);

	auto rasp = sch.getSchedule();
	for (auto day : rasp) {
		for (auto les : day) {
			std::cout << les.value().room << std::endl;
		}
		std::cout << std::endl;
	}
}
// 1 группа - Тихон
// 4 группа - Вася
// 5 группа - Миша
// Маша - препод 5 группы