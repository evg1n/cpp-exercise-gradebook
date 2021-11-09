#include <iostream>
#include <string>
#include "./lib/GradeBook.h"
using namespace std;

int main ()
{
	GradeBook gb1("CS101");
	GradeBook gb2("CS102");

	cout << "gb1 for course: " << gb1.getCourseName() <<  "\ngb2 for course: " << gb2.getCourseName() << endl; 

	return 0;
}