// Lectura de txt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{

	int a;
	ifstream fs("Numeros.txt");

	if (fs.is_open())
	{
		for (int i = 0; i < 5; i++)
		{

			fs >> a;

			cout << a << endl;

		}
	}

	system("PAUSE");
    return EXIT_SUCCESS;
}

