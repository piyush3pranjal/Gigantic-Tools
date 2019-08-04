#include "userInputFunc.h"
#include "calcFunc.h"
#include <iostream>
//#include <iomanip>

//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//************		Menu Selection		*************//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//

void startSelection()
{
	std::cout << "01. Age\t\t02. Angle\t03. Area\t04. Average\n";
	std::cout << "05. BMI\t\t06. Volume\t07. Color\t08. Currency\n";
	std::cout << "09. Data\t10. Date\t11. Discount\t12. Energy\n";
	std::cout << "13. Length\t14. Mass\t15. Multiple\t16. Percent\n";
	std::cout << "17. Power\t18. Pressure\t19. Speed\t20. Char Case\n";
	std::cout << "21. Time\t22. Temperature\n\n";

	std::cout << "Choose one of above (E.g. 1) : ";

	int x{ askInputAsInteger() };
	std::cout << '\n';

	switch (x)
	{
	case 1:
		ageCalcFunc();
		break;

	case 5:
		bmiCalcFunc();
		break;

	default:
		std::cout << "\nTry Again!\n\n";
		startSelection();
		break;
	}

}

//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//************		Integer Inputs		*************//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//

int askInputAsInteger()
{
	int x{};
	std::cin >> x;

	return x;
}


//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//************		Float Inputs		*************//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//

float askInputAsFloat()
{
	float x{};
	std::cin >> x;

	return x;
}


//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//**********		Age Related Inputs		*********//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//

int birthDayInput()
{
	// Asking Input for Birth Day.
	std::cout << "Enter Birth Day (E.g. 05) : ";
	int x{ askInputAsInteger() };

	if (x >= 32)
	{
		std::cout << "\n! Enter Day in between 1 - 31.\n";
		x = birthDayInput();
		return x;
	}

	return x;
}

int birthMonthInput()
{
	// Asking Input for Birth Month.
	std::cout << "Enter Birth Month (E.g. 12) : ";
	int x{ askInputAsInteger() };

	if (x >= 13)
	{
		std::cout << "\n! Enter Month in between 1 - 12.\n";
		x = birthMonthInput();
		return x;
	}

	return x;
}

int birthYearInput()
{
	// Asking Input for Birth Year.
	std::cout << "Enter Birth Year (E.g. 1995) : ";
	int x{ askInputAsInteger() };

	return x;
}


int currentDayInput()
{
	// Asking Input for Current Day.
	std::cout << "Enter Current Day (E.g. 05) : ";
	int x{ askInputAsInteger() };

	if (x >= 32)
	{
		std::cout << "\n! Enter Day in between 1 - 31.\n";
		x = currentDayInput();
		return x;
	}

	return x;
}

int currentMonthInput()
{
	// Asking Input for Current Month.
	std::cout << "Enter Current Month (E.g. 12) : ";
	int x{ askInputAsInteger() };

	if (x >= 13)
	{
		std::cout << "\n! Enter Month in between 1 - 12.\n";
		x = currentMonthInput();
		return x;
	}

	return x;
}

int currentYearInput()
{
	// Asking Input for Current Year.
	std::cout << "Enter Current Year (E.g. 1995) : ";
	int x{ askInputAsInteger() };

	return x;
}


//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//**********		BMI Related Inputs		*********//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//


float weightInput()
{
	// Asking Input for User Weight.
	std::cout << "Enter your weight in Kg (E.g. 65.5) : ";
	
	float x{ askInputAsFloat() };
	
	return x;
}

float heightInput()
{
	// Asking Input for Uesr Height.
	std::cout << "Enter your height in feet (E.g. 5.7) : ";

	float x{ askInputAsFloat() };

	return x;
}