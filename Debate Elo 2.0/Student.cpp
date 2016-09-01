#include "Student.h"
#include <string>
//Default constructor
Student::Student()
{
	FName = "You";
	LName = "Done";
	school = "Goofed";
	Elo = 1000;
	id = 9999;
}
//only one that should ever be used. for realz
Student::Student(std::string first, std::string last, int e, std::string x, int pk)
{
	FName = first;
	LName = last;
	Elo = e;
	school = x;
	id = pk;
}
void Student::SetElo(int e)
{
	Elo = e;
}
void Student::ChangeElo(bool up, int c)
{
	if (up)
	{
		Elo = Elo + c;
	}
	else
	{
		Elo = Elo - c;
	}
	if (Elo < 0)
	{
		Elo = 0;
	}
}
void Student::xport()
{

}