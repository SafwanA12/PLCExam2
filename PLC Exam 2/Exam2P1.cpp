//Safwan Alam Exam 2 Problem 1 002248637
#include <iostream>

#include <string>

#include <stdlib.h>

using namespace std;

enum TempLevel
{
  Low = 15,
  Medium = 30,
  High = 45
};

enum TempConverter
{
  Celsius = 1,
  Fahrenheit
};

void TempLevel(int changedTemp);

int main()

{

  while (true)

  {

    TempConverter Converter;

    int userInput, choice, changedTemp;

    cout << "----------------------------------" << endl;

    cout << "Please enter the choice : " << endl;

    cout << "Enter " << Celsius << " -- convert from Celsius to Fahrenheit" << endl;

    cout << "Enter " << Fahrenheit << " -- convert from Fahrenheit to Celsius" << endl;

    cout << "Choice :";

    cin >> choice;

    switch (choice)

    {

    case Celsius:

      cout << "Please enter the Celsius value : ";

      cin >> userInput;

      changedTemp = (userInput * 9 / 5) + 32;

      cout << "Fahrenheit is " << changedTemp << endl;

      TempLevel(userInput);

      break;

    case Fahrenheit:

      cout << "Please enter the Fahrenheit value : ";

      cin >> userInput;

      changedTemp = (userInput - 32) * 5 / 9;

      cout << "Celsius is " << changedTemp << endl;

      TempLevel(changedTemp);

      break;

    default:

      cout << "Invalid Option" << endl;

      exit(0);

      break;
    }
  }
}

void TempLevel(int changedTemp)

{

  string result;

  changedTemp <= Low ? result = "It is cold" : "";

  changedTemp > Low &&changedTemp <= Medium ? result = "It is comfortable" : "";

  changedTemp > Medium &&changedTemp <= High ? result = "It is hot" : "";

  changedTemp > High ? result = "It is very hot" : "";

  cout << result << endl;
}