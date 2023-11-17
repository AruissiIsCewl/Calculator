#include <Windows.h>
#include <iostream>

// simple calc made by rayhvh, this was meant for learning purposes on how return works in C++ and how basic user input works! made in like 30 minutes cba to put much effort in it

double cubeformula(double lwh)
{
	return lwh * lwh * lwh; // another way of using return you could make a var called answer and just do | double ans = cubeformula(val);
}

double multi(double number1, double number2)
{
	return number1 * number2;
}

double add(double number1, double number2)
{
	return number1 + number2;
}

double subtract(double number1, double number2)
{
	return number1 - number2;
}

double circleformula(double radius)
{
	return radius * 3.14 * 2;
}


double triangleformula(double height, double base)
{
	return height * base / 2;
}

int main()
{
MAIN:

	// main part of the program ignore all of the output below this is just UI, not important
	system("cls");
	std::cout << "Ray's Calculator\n\n\n";


	int var; 
	std::cout << "1. Cube Formula\n";
	std::cout << "2. Multiply\n";
	std::cout << "3. Addition\n";
	std::cout << "4. Subtraction\n";
	std::cout << "5. Find the circumfrence of a circle\n";
	std::cout << "6. Triangle Formula\n\n\n";
	std::cin >> var;

	if (var == NULL) // making sure it doesnt fail to collect user input (if it doesnt its find because the switch defaults to going back to this)
		MessageBoxA(NULL, "Bad Cookie Found! (ur fine)", "Failure", MB_ICONERROR); // making the messagebox


	switch (var) // switches are just if statements but a lot better and a lot easier
	{
	case 1:
		system("cls");
		std::cout << "Ray's Calculator\n\n\n";
		std::cout << "Input Volume: ";
		double vol;
		std::cin >> vol;
		std::cout << "The area of the cube is: " << cubeformula(vol) << "\n\n\n";
		
		std::cout << "'9' to go back to the menu.";

		while (true)
		{
			if (GetAsyncKeyState('9'))
			{
				break;
			}
		}

		vol = NULL; // setting these to NULL to ensure nothing is being saved.
		var = NULL;

		if (vol != NULL)
			MessageBoxA(NULL, "Bad Raspberry found! (Cube might not work anymore)", "Failure", MB_ICONERROR);

		if (var != NULL)
			MessageBoxA(NULL, "Bad Blueberry found!", "Failure", MB_ICONERROR);

		goto MAIN;
		break;

	case 2:
		system("cls");
		std::cout << "Ray's Calculator\n\n\n";
		std::cout << "Input Number 1:  ";
		double n1;
		std::cin >> n1;
		std::cout << "\nInput Number 2: ";
		double n2;
		std::cin >> n2;
		std::cout << n1 << " x " << n2 << " = " << multi(n1, n2) << "\n\n\n";

		std::cout << "'9' to go back to the menu.";

		while (true)
		{
			if (GetAsyncKeyState('9'))
			{
				break;
			}
		}

		n1 = NULL;
		n2 = NULL;
		var = NULL;

		if (var != NULL)
			MessageBoxA(NULL, "Failure", "Bad blueberry found!", MB_ICONERROR);



		goto MAIN;

		break;

	case 3:
		system("cls");
		std::cout << "Ray's Calculator\n\n\n";
		std::cout << "Input Number 1:  ";
		double nn1;
		std::cin >> nn1;
		std::cout << "\nInput Number 2: ";
		double nn2;
		std::cin >> nn2;
		std::cout << nn1 << " + " << nn2 << " = " << add(nn1, nn2) << "\n\n\n";

		std::cout << "'9' to go back to the menu.";
		while (true)
		{
			if (GetAsyncKeyState('9'))
			{
				break;
			}
		}

		nn1 = NULL;
		nn2 = NULL;
		var = NULL;

		if (var != NULL)
			MessageBoxA(NULL, "Failure", "Bad blueberry found!", MB_ICONERROR);

		goto MAIN;
		break;

	case 4:
		system("cls");
		std::cout << "Ray's Calculator\n\n\n";
		std::cout << "Input Number 1:  ";
		double nnn1;
		std::cin >> nnn1;
		std::cout << "\nInput Number 2: ";
		double nnn2;
		std::cin >> nnn2;
		std::cout << nnn1 << " - " << nnn2 << " = " << subtract(nnn1, nnn2) << "\n\n\n";

		std::cout << "'9' to go back to the menu.";
		while (true)
		{
			if (GetAsyncKeyState('9'))
			{
				break;
			}
		}

		nnn1 = NULL;
		nnn2 = NULL;
		var = NULL;

		if (var != NULL)
			MessageBoxA(NULL, "Failure", "Bad blueberry found!", MB_ICONERROR);

		goto MAIN;
		break;

	case 5:
		system("cls");
		std::cout << "Ray's Calculator\n\n\n";
		std::cout << "Input Radius: ";
		double rad;
		std::cin >> rad;

		std::cout << "\n\n\n" << rad << " x " << "3.14" << " x " << "2" << " = " << circleformula(rad) << "\n\n\n";

		std::cout << "'9' to go back to the menu.";

		while (true)
		{
			if (GetAsyncKeyState('9'))
			{
				break;
			}
		}

		rad = NULL;
		var = NULL;


		if (var != NULL)
			MessageBoxA(NULL, "Failure", "Bad blueberry found!", MB_ICONERROR);

		goto MAIN;
		break;

	case 6:
		system("cls");
		std::cout << "Ray's Calculator\n\n\n";
		std::cout << "Input Height: ";
		double h;
		std::cin >> h;

		std::cout << "\nInput Base: ";
		double b;
		std::cin >> b;

		std::cout << "\n\n\n" << h << " x " << b << " / " << "2" << " = " << triangleformula(h, b);

		while (true)
		{
			if (GetAsyncKeyState('9'))
			{
				break;
			}
		}

		b = NULL;
		h = NULL;
		var = NULL;


		if (var != NULL)
			MessageBoxA(NULL, "Failure", "Bad blueberry found!", MB_ICONERROR);

		goto MAIN;
		break;

	default:
		system("cls");
		goto MAIN; // defualt case going back to the start.
		break;
	}
}


// hope this helped :P