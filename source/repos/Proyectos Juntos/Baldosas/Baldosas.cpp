// Baldosas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	char val[11];
	char a;
	ifstream file("Vereda.txt");

	for (int i = 0; i < 12; i++)
	{


		file >> a;

		val[i] = a;

	}

	for (int i = 0; i < 12; i++)
	{

		if (val[i] == 'R')
		{

			switch (i)
			{
			case 0:

				val[i] = 'B';

				break;

			case 11:

				switch (val[i - 1])
				{

				case 'N':

					val[i] = 'B';

				case 'G':

					val[i] = 'N';

				case 'B':

					val[i] = 'G';

					break;
				}

			default:


				switch (val[i - 1])
				{

				case 'N':

					val[i] = 'B';

					break;

				case 'G':

					val[i] = 'N';

					break;

				case 'B':

					val[i] = 'G';

					break;
				}

				break;
			}

		}
		else
		{

			cout << "NEXT" << endl;

		}

	}

	file.close();

	for (int i = 0; i < 12; i++)
	{

		cout << val[i] << " ";

	}

	cout << endl;


	system("PAUSE");
    return EXIT_SUCCESS;
}

