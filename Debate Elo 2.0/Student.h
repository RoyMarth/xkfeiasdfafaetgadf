#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student
{
private:
	//must be strings because I'm bad at programming
	std::string FName;
	std::string LName;
	int Elo;
	std::string school;
	int id;

public:
	//incase im an idiot
	Student();
	//standard constructor
	Student(std::string first, std::string last, int e, std::string x, int pk);
	//sets elo to specfic number
	void SetElo(int e);
	//change elo by a set ammount
	//if up is true elo increases by c
	//if up is false elo decreases by c
	void ChangeElo(bool up, int c);
	//Saves any changes to mysql database
	void xport();

	int getelo() { return Elo; };
	int getID() { return id; };
	std::string getFName() { return FName; };
	std::string getLName() { return LName; };
	std::string getSchool() { return school; };

};
#endif