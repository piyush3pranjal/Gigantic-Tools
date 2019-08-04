#include "calcFunc.h"
#include "userInputFunc.h"
#include <iostream>
#include <iomanip>
#include <string>


//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//******	    Age Calculation Function        *****//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//


void ageCalcFunc()
{
	int birthDay{ birthDayInput() };

	int birthMonth{ birthMonthInput() };

	int birthYear{ birthYearInput() };
	
	int currentDay{ currentDayInput() };

	int currentMonth{ currentMonthInput() };
	
	int currentYear{ currentYearInput() };

	// Some error validation.
	if (currentDay < birthDay) 
	{
		currentDay += 31;
		currentMonth -= 1;
	}

	if (currentMonth < birthMonth)
	{
		currentMonth += 12;
		currentYear -= 1;
	}

	int days{ currentDay - birthDay };
	int months{ currentMonth - birthMonth };
	int years{ currentYear - birthYear };

	std::cout << "\nCongratulations !!!\nYou are " << years << " years, " << months << " months, and " << days << " days old.\n\n";

	startSelection();
}


//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//******	    BMI Calculation Function        *****//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//

std::string bmiCheck(float x)
{
	if (x <= 18.5f)
	{
		return "Underweight";
	} 
	else if(x <= 25.0f)
	{
		return "Normal";
	}
	else if (x > 25.0f)
	{
		return "Over Weight";
	}
	else
	{
		return "Unknown";
	}
}


void bmiCalcFunc()
{
	std::cout << "\n*=*=*=*=*=*=*=*=* INFORMATION *=*=*=*=*=*=*=*=*\n";
	std::cout << "*                                             *\n";
	std::cout << "*   Underweight      Normal     Over Weight   *\n";
	std::cout << "* |=============|=============|=============| *\n";
	std::cout << "* 16.0        18.5          25.0         40.0 *\n";
	std::cout << "*                                             *\n";
	std::cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n";
	// Weight in Kilogram.
	float weight{ weightInput() };

	// Height in meter square.
	// 1 foot has 0.3048 meters and 0.09290 meter square.
	float height{ (heightInput()*0.30f) };

	float bmiCalc{ weight / (height*height) };

	std::cout << std::setprecision(4);

	std::cout << "Congratulations !\nYour BMI is " << bmiCalc << ", You are " << bmiCheck(bmiCalc) << ".\n\n";

	startSelection();
}



//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//
//******	  AVERAGE Calculation Function      *****//
//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*//

void averageCalcFunc()
{
	//On Hold Need Array Management
}