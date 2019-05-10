#ifndef B_H
#define B_H
#include <iostream>
#include <string>

#include "A.h" // System headers use <>, local headers use ""

using namespace std;
class B : A
{
	private:
		string name;

	public:
		B(string n, int x) : A(x)
		{
			name = n;
		}
};

#endif
