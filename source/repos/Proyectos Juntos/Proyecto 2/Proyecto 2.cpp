// Proyecto 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int val[6];
	val[0] = 2;
	val[1] = 0;
	val[2] = 0;
	val[3] = 3;
	val[4] = 0;
	val[5] = 1;

	for (int i = 0; i < 6; i++)
	{

		if (val[i] == 0)
		{

			switch (i)
			{
			case 0:

				switch (val[i + 1])
				{

				case 1:

					val[i] = 2;

					break;

				case 2:

					val[i] = 1;

					break;

				case 3:

					val[i] = 1;

					break;
				}

			case 5:

				switch (val[i - 1])
				{

				case 1:

					val[i] = 2;

					break;

				case 2:

					val[i] = 1;

					break;

				case 3:

					val[i] = 1;

					break;
				}

			default:


				switch (val[i - 1])
				{

				case 1:

					if (val[i + 1] == 2)
					{

						val[i] = 3;

					}
					else
					{

						val[i] = 2;

					}

					break;

				case 2:

					if (val[i + 1] == 1)
					{

						val[i] = 3;

					}
					else
					{

						val[i] = 1;

					}

					break;

				case 3:

					if (val[i + 1] == 1)
					{

						val[i] = 2;

					}
					else
					{

						val[i] = 1;

					}

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

	for (int i = 0; i < 6; i++)
	{

		cout << val[i] << " ";

	}

	cout << endl;


	system("PAUSE");
	return EXIT_SUCCESS;
}

