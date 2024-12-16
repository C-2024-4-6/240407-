#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include"student.h"

void Student::display()
{
	std::cout << "nums:" << num << std::endl;
	std::cout << "name:" << name << std::endl;
	std::cout << "sex:" << sex << std::endl;
}

void Student::set_value(int Num, const char Name[],const char* Sex)
{
	for (int i = 0; i < sizeof(Name) / sizeof(Name[0]); i++)
	{
		Student::name[i] = Name[i];
	}
	Student::num = Num;
	Student::sex = *Sex;
}
#endif