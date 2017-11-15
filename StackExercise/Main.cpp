#include <iostream>
#include<string>
#include "IntStack.h"
using namespace std;

void main()
{
	StackExercise::IntStack<string> s;
	s.Push("a");
	s.Push("b");
	s.Push("c");
	s.Push("d");
	s.Push("e");
	for (size_t i = 0; i < 5; i++)
	{
		cout << s.Pop() << endl;
	}
	// ...
}