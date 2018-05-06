//Thermocouples
//This project will give you the temperature after you select a thermocouple type
//Thermocouples will be abbreviated as (TC)
//Reference junction temperature in this program is 0

//Version 0.1.0
//Created on 3.28.2017

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

//Functions to be used in the program

int copyright_fun();						//This function displays the copyright information to the user
int temperatures(double);					//This function displays the output in various temperatures


//Start of the main function
int main()
{

	//Variables used in the program
	double type_tc;							//Holds the value that determines the type of thermocouple
	double tc_voltage_input;				//Holds the voltage value that is input by the user
	double tc_voltage;						//Holds the voltage value of the thermocouple being used converted to millivolts
	double a0;								//Holds the value for the first polynomial value in the equation
	double a1;								//Holds the value for the second polynomial value in the equation
	double a2;								//Holds the value for the third polynomial value in the equation
	double a3;								//Holds the value for the fourth polynomial value in the equation
	double a4;								//Holds the value for the fifth polynomial value in the equation
	double a5;								//Holds the value for the sixth polynomial value in the equation
	double a6;								//Holds the value for the seventh polynomial value in the equation
	double a7;								//Holds the value for the eight polynomial value in the equation
	double a8;								//Holds the value for the ninth polynomial value in the equation
	double a9;								//Holds the value for the tenth polynomial value in the equation
	double tc_temp;							//Holds the value of the temperature of the thermocouple being used

	//Start of program
	cout << "Thermocouple Values\n";
	cout << "Version 0.1.0\n";
	cout << "This program will help you determine the temperature\n";
	cout << "based on the output of your thermocouple.\n";
	cout << "Reference junction temperature in this program is 0.\n";
	cout << "\n";

	//Call the function to show the copyright information
	copyright_fun();

	cout << "\n";

	//Start of the menu to ask the user which thermocouple they want to use
	cout << "Determine the type of thermocouple you are using.\n";
	cout << "Enter a number based on the type of thermocouple.\n";
	cout << "1. Type J\n";
	cout << "2. Type K\n";
	cout << "3. Type E\n";
	cout << "4. Type R\n";
	cout << "5. Type S\n";
	cout << "6. Type T\n";
	cout << "\n";

	//Get the type of thermocouple from the user
	cout << "Enter your selection: ", cin >> type_tc;
	cout << "\n";

	//Validation loop for the menu selection
	while (type_tc < 1 || type_tc > 6) 
	{
		cout << "Not a valid selection.\n";
		cout << "Pick a thermocouple type.\n";
		cout << "1. Type J\n";
		cout << "2. Type K\n";
		cout << "3. Type E\n";
		cout << "4. Type R\n";
		cout << "5. Type S\n";
		cout << "6. Type T\n";
		cout << "Enter Selection: ", cin >> type_tc;
		cout << "\n";
	}


	//Create an if else if statement to determine what to do based on the type of thermocouple picked.
	if (type_tc == 1)
	{

		//Start of millivolt calculation and information collection
		cout << "You have chosen Type J Thermocouple.\n";
		cout << "Enter the voltage of the thermocouple in millivolts: ", cin >> tc_voltage_input;
		
		//Convert the input voltage to millivolts
		tc_voltage = tc_voltage_input / 1000;
		
		//Polynomial values to be used in calculation
		a0 = -0.048868252;
		a1 = 19873.14503;
		a2 = -218614.5353;
		a3 = 11569199.78;
		a4 = -264917531.4;
		a5 = 2018441314;
		a6 = 0;
		a7 = 0;
		a8 = 0;
		a9 = 0;

		//Equation to determine the TC Temperature
		tc_temp = (a0 + (a1 * tc_voltage) + (a2 * pow(tc_voltage, 2)) + (a3 * pow(tc_voltage, 3)) + (a4 * pow(tc_voltage, 4)) + (a5 * pow(tc_voltage, 5)) + (a6 * pow(tc_voltage, 6)) + (a7 * pow(tc_voltage, 7)) + (a8 * pow(tc_voltage, 8)) + (a9 * pow(tc_voltage, 9)));

	}

	else if (type_tc == 2)
	{
	
		//Start of millivolt calculation and information collection
		cout << "You have chosen Type K Thermocouple.\n";
		cout << "Enter the voltage of the thermocouple in millivolts: ", cin >> tc_voltage_input;

		//Convert the input voltage to millivolts
		tc_voltage = tc_voltage_input / 1000;

		//Polynomial values to be used in calculation
		a0 = 0.226584602;
		a1 = 24152.109;
		a2 = 67233.4248;
		a3 = 2210340.682;
		a4 = -860963914.9;
		a5 = 48350600000;
		a6 = -1184520000000;
		a7 = 13869000000000;
		a8 = -63370800000000;
		a9 = 0;

		//Equation to determine the TC Temperature
		tc_temp = (a0 + (a1 * tc_voltage) + (a2 * pow(tc_voltage, 2)) + (a3 * pow(tc_voltage, 3)) + (a4 * pow(tc_voltage, 4)) + (a5 * pow(tc_voltage, 5)) + (a6 * pow(tc_voltage, 6)) + (a7 * pow(tc_voltage, 7)) + (a8 * pow(tc_voltage, 8)) + (a9 * pow(tc_voltage, 9)));

	}

	else if (type_tc == 3)
	{

		//Start of millivolt calculation and information collection
		cout << "You have chosen Type E Thermocouple.\n";
		cout << "Enter the voltage of the thermocouple in millivolts: ", cin >> tc_voltage_input;

		//Convert the input voltage to millivolts
		tc_voltage = tc_voltage_input / 1000;

		//Polynomial values to be used in calculation
		a0 = 0.104967248;
		a1 = 17189.45282;
		a2 = -282639.085;
		a3 = 12695339.5;
		a4 = -448703084.6;
		a5 = 11086600000;
		a6 = -176807000000;
		a7 = 1718420000000;
		a8 = -9192780000000;
		a9 = 20613200000000;

		//Equation to determine the TC Temperature
		tc_temp = (a0 + (a1 * tc_voltage) + (a2 * pow(tc_voltage, 2)) + (a3 * pow(tc_voltage, 3)) + (a4 * pow(tc_voltage, 4)) + (a5 * pow(tc_voltage, 5)) + (a6 * pow(tc_voltage, 6)) + (a7 * pow(tc_voltage, 7)) + (a8 * pow(tc_voltage, 8)) + (a9 * pow(tc_voltage, 9)));

	}

	else if (type_tc == 4)
	{

		//Start of millivolt calculation and information collection
		cout << "You have chosen Type R Thermocouple.\n";
		cout << "Enter the voltage of the thermocouple in millivolts: ", cin >> tc_voltage_input;

		//Convert the input voltage to millivolts
		tc_voltage = tc_voltage_input / 1000;

		//Polynomial values to be used in calculation
		a0 = 0.263632917;
		a1 = 179075.491;
		a2 = -48840341.37;
		a3 = 19000200000;
		a4 = -4827040000000;
		a5 = 762091000000000;
		a6 = -7.20026E+016;
		a7 = 3.71496E+018;
		a8 = -8.03104E+019;
		a9 = 0;

		//Equation to determine the TC Temperature
		tc_temp = (a0 + (a1 * tc_voltage) + (a2 * pow(tc_voltage, 2)) + (a3 * pow(tc_voltage, 3)) + (a4 * pow(tc_voltage, 4)) + (a5 * pow(tc_voltage, 5)) + (a6 * pow(tc_voltage, 6)) + (a7 * pow(tc_voltage, 7)) + (a8 * pow(tc_voltage, 8)) + (a9 * pow(tc_voltage, 9)));

	}

	else if (type_tc == 5)
	{

		//Start of millivolt calculation and information collection
		cout << "You have chosen Type S Thermocouple.\n";
		cout << "Enter the voltage of the thermocouple in millivolts: ", cin >> tc_voltage_input;

		//Convert the input voltage to millivolts
		tc_voltage = tc_voltage_input / 1000;

		//Polynomial values to be used in calculation
		a0 = 0.927763167;
		a1 = 169526.515;
		a2 = -31568363.94;
		a3 = 8990730663;
		a4 = -1635650000000;
		a5 = 188027000000000;
		a6 = -1.37241E+016;
		a7 = 6.17501E+017;
		a8 = -1.56105E+019;
		a9 = 1.69535E+020;

		//Equation to determine the TC Temperature
		tc_temp = (a0 + (a1 * tc_voltage) + (a2 * pow(tc_voltage, 2)) + (a3 * pow(tc_voltage, 3)) + (a4 * pow(tc_voltage, 4)) + (a5 * pow(tc_voltage, 5)) + (a6 * pow(tc_voltage, 6)) + (a7 * pow(tc_voltage, 7)) + (a8 * pow(tc_voltage, 8)) + (a9 * pow(tc_voltage, 9)));

	}

	else if (type_tc == 6)
	{

		//Start of millivolt calculation and information collection
		cout << "You have chosen Type T Thermocouple.\n";
		cout << "Enter the voltage of the thermocouple in millivolts: ", cin >> tc_voltage_input;

		//Convert the input voltage to millivolts
		tc_voltage = tc_voltage_input / 1000;

		//Polynomial values to be used in calculation
		a0 = 0.10086091;
		a1 = 25727.94369;
		a2 = -767345.8295;
		a3 = 78025595.81;
		a4 = -9247486589;
		a5 = 697688000000;
		a6 = -26619200000000;
		a7 = 394078000000000;
		a8 = 0;
		a9 = 0;

		//Equation to determine the TC Temperature
		tc_temp = (a0 + (a1 * tc_voltage) + (a2 * pow(tc_voltage, 2)) + (a3 * pow(tc_voltage, 3)) + (a4 * pow(tc_voltage, 4)) + (a5 * pow(tc_voltage, 5)) + (a6 * pow(tc_voltage, 6)) + (a7 * pow(tc_voltage, 7)) + (a8 * pow(tc_voltage, 8)) + (a9 * pow(tc_voltage, 9)));

	}

	//Call the function to output the information
	temperatures(tc_temp);

	

	//End of the program
	cout << "Press Enter to End Program\n";

	cin.ignore(); //Ends after the user hits enter

}

//Copyright information function

int copyright_fun()
{
	
	//Variables to be used in function
	double view_copyright;							//Hows the selection from the menu by the user

	//Start of the copyright information function
	cout << "Copyright (c) 2017, Nicholas R Pettit\n";
	cout << "nicholas.r.pettit@protonmail.com";
	cout << "All rights reserved.\n";
	cout << "\n";
	cout << "To view entire copyright information make a selection from the menu.\n";
	cout << "1. Yes\n";
	cout << "2. No\n";
	cout << "Enter Selection: ", cin >> view_copyright;

//Validate the user selection on the menu
//Right now if you select anything other than a number the program freaks out
	while (view_copyright < 1 || view_copyright > 2)
		{
			cout << "Not a valid selection.\n";
			cout << "To view entire copyright information make a selection from the menu.\n";
			cout << "1. Yes\n";
			cout << "2. No\n";
			cout << "Enter Selection: ", cin >> view_copyright;
			cout << "\n";

		}
	

//Start of if - else if statement to determine if the user wants to read the copyright information
	if (view_copyright == 1)
		{
		cout << "Redistribution and use in source and binary forms, with or without\n";
		cout << "modification, are permitted provided that the following conditions are met:";
		cout << "\n";
		cout << "1. Redistributions of source code must retain the above copyright notice, this\n";
		cout << "list of conditions and the following disclaimer.\n";
		cout << "2. Redistributions in binary form must reproduce the above copyright notice,\n";
		cout << "this list of conditions and the following disclaimer in the documentation\n";
		cout << "and/or other materials provided with the distribution.";
		cout << "3. Neither the name of Nicholas R Pettit nor the names of its contributors\n";
		cout << "may be used to endorse or promote products derived from this software\n";
		cout << "without specific prior written permission.";
		cout << "\n";
		cout << "THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ""AS IS"" AND\n";
		cout << "ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n";
		cout << "WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE\n";
		cout << "DISCLAIMED. IN NO EVENT SHALL NICHOLAS PETTIT OR CONTRIBUTORS BE LIABLE FOR\n";
		cout << "ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES\n";
		cout << "(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;\n";
		cout << "LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND\n";
		cout << "ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\n";
		cout << "(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS\n";
		cout << "SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.";
		cout << "\n";
		cout << "The views and conclusions contained in the software and documentation are those\n";
		cout << "of the authors and should not be interpreted as representing official policies,\n";
		cout << "either expressed or implied, of the FreeBSD Project.";
		cout << "\n";
		cout << "\n";
		}

//User does not want to see the copyright information
		else if (view_copyright == 2)
		{
			
		}



		return 0;
	
}


//This function determines the temperature in the output of the program
int temperatures(double tc_temp)
{
	//Variables to be used in this function
	double temp_fah;								//This temperature will display in degree Fahrenheit
	double temp_kel;								//This temperature will display in Kelvin
	//The calculations will give the temperature in degree Celsius by default

	//Convert Celsius to Fahrenheit
	temp_fah = ((9 / 5) * tc_temp) + 32;

	//Convert Celsius to Kelvin
	temp_kel = tc_temp + 273.15;

	//Display what the thermocouple temperature is
	cout << "Your thermocouple is reading:\n";
	cout << tc_temp << " Celsius\n";
	cout << temp_fah << " Fahrenheit\n";
	cout << temp_kel << " Kelvin\n";
	cout << "\n";
	cin.ignore(); //Ends after the user hits enter

	return 0;
}


