// Practica 1 (escritura de txt).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

void cambiar(int &a, int &b)
{

	int temp;
	temp = a;
	a = b;
	b = temp;

}


int main()
{

	ofstream fs("Numeros.txt");

	int v[5];
	int temp;
	int cambio;
	cambio = 0;
	temp = 0;
	int max = 4;
	v[0] = (rand() % 50);
	v[1] = (rand() % 50);
	v[2] = (rand() % 50);
	v[3] = (rand() % 50);
	v[4] = (rand() % 50);

	for (int i = 0; i < 5; i++)
	{

		cout << v[i] << " ";

	}

	do
	{
		cout << endl;
		cambio = 0;
		temp = 0;

		for (int i = max; i >= 0; i--)
		{

			if (v[i] > v[i - 1])
			{
				cout << "NADA" << " ";

			}
			else
			{
				cout << "CAMBIAR" << " ";
				cambiar(v[i - 1], v[i]);
				//temp = v[i-1];
				//v[i-1] = v[i];
				//v[i] = temp;
				cambio++;

			}

		}

	} while (cambio != 0);

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";

		fs << v[i] << endl;

	}

	fs.close();

	cout << endl;


	system("PAUSE");
    return EXIT_SUCCESS;
}

