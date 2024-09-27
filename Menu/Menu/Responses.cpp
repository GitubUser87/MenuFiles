#include "Responses.h"
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;
//Contents of the responses
void UserInput()
{
    int value1;
    cout << "Please enter Value 1" << endl;
    cin >> value1;

    cout << "Please enter Value 2" << endl;
    int value2;
    cin >> value2;

    int result = value1 / value2;
    int remainders = value1 % value2;

    cout << "The result of dividing " << value1 << " by " << value2 << " is " << result << " with the remainder of " << remainders << endl;
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void FahrenheitToCelsius()
{
    int temp;
    cout << "Please enter the temperature in F" << endl;
    cin >> temp;
    int result = (temp - 32) * 5 / 9;
    cout << "This is " << result << " in celsius" << endl;
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void Means()
{
    int input;
    int sum = 0;

    cout << "Please enter the first input." << endl;
    cin >> input;
    sum = sum + input;
    // This will then make sum whatever the user has inputed into the program. 
    // As more inputs are entered then the total sum will increase based off what has been entered. 
    cout << "Please enter the second input." << endl;
    cin >> input;
    sum = sum + input;

    cout << "Please enter the third input." << endl;
    cin >> input;
    sum = sum + input;

    cout << "Please enter the final input." << endl;
    cin >> input;
    sum = sum + input;
    // With all of the inputs gathered the sum should now be the total of the numbers added up.
    std::cout << "The mean of the numbers you have entered is: " << sum / 4 << endl;
    // This will then divide the total sum by the total amount which is 4.
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void GreaterThanOrEqual()
{
    int value1;
    cout << "Please enter a number." << endl;
    cin >> value1;

    int value2;
    cout << "Please enter a number." << endl;
    cin >> value2;

    if (value1 > value2)
    {
        cout << "Value 1 is greater than value 2." << endl;
    }
    else if (value1 < value2)
    {
        cout << "Value 2 is greater than value 1" << endl;

    }
    else
    {
        cout << "The values are the same." << endl;
    }
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void OddOrEven()
{
    int value1;
    cout << "Please enter a number." << endl;
    cin >> value1;

    int result(value1 % 2);

    if (result == 0)
    {
        cout << "Your number is even." << endl;
    }
    else
    {
        cout << "Your number is odd." << endl;
    }
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void LeapYear()
{
    int year;
    cout << "Please enter a year." << endl;
    cin >> year;

    bool isdivisibleby4 = (year % 4 == 0);
    bool isdivisibleby400 = (year % 400 == 0);
    bool isdivisibleby100 = (year % 100 == 0);

    if (isdivisibleby4)
    {
        if (isdivisibleby100)
        {
            if (isdivisibleby400)
            {
                cout << "That is a leap year." << endl;
            }
            else
            {
                cout << "That is not a leap year." << endl;
            }

        }
        else
        {
            cout << "That is a leap year." << endl;
        }

    }
    else
    {
        cout << "That is not a leap year." << endl;
    }
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void Time()
{
    int seconds;
    cout << "Please enter an amount of seconds." << endl;
    cin >> seconds;

    int Remainingseconds = seconds % 60; // remaining seconds
    int hours = seconds / (60 * 60); // hours
    int minutes = (seconds % 3600) / 60; // minutes

    cout << seconds << " seconds is " << hours << "hrs: " << minutes << "mins: " << Remainingseconds << "Seconds" << endl;
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void ComputeAGrade()
{
    int total = 0;

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter % for modle: " << i + 1 << endl;

        int percent;
        cin >> percent;

        total = total + percent;

    }
    cout << total << endl;
    int average = total / 6;
    cout << "Overall %: " << average << endl;

    if (average >= 85)
        cout << "A*" << endl;
    else if (average >= 70)
        cout << "A" << endl;
    else if (average >= 60)
        cout << "B" << endl;
    else if (average >= 50)
        cout << "C" << endl;
    else if (average >= 40)
        cout << "D" << endl;
    else
        cout << "FAILED" << endl;
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void ForwardsAndBackwards()
{
    //int ages[10] = { 29,34,21,19,16,45,34,57,99,40 };
    int *ages = new int[10];
    for (size_t i = 0; i < 10; i++)
    {
        ages[i] = 16 + rand() % 84;
    }

    // Try to convert to a pointer to an array.
    cout << "Forwards" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ages[i] << endl;
    }
    cout << "Reverse" << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << ages[i] << endl;
    }
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}
void SquarredValues()
{
    int results[20];
    for (int i = 0; i < 20; i++)
    {
        results[i] = i * i;
        cout << results[i] << endl;
    }
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();

}
void UserInputMenu()
{
    char choice;
    float Result;
    float Value1;
    cout << "Please enter your 1st Value. " << endl;
    cin >> Value1;

    cout << "Please enter Value." << endl;
    float Value2;
    cin >> Value2;

    cout << "Please select what you would like to do with the numbers." << endl;
    cout << "1: Add them." << endl;
    cout << "2: Multiply them." << endl;
    cout << "3: Divide them." << endl;
    cout << "q: Quit." << endl;
    cin >> choice;
    switch (choice)
    {
    case '1':
        Result = Value1 + Value2;
        cout << "The result of adding " << Value1 << " and " << Value2 << " is " << Result << endl;
        break;
    case '2':
        Result = Value1 * Value2;
        cout << "The result of multiplying " << Value1 << " by " << Value2 << " is " << Result << endl;
        break;
    case '3':
        Result = Value1 / Value2;
        cout << "The result of dividing " << Value1 << " and " << Value2 << " is " << Result << endl;
        break;
    }
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();

}

void Structures()
{
    struct Character
    {
        string name;
        int age;
    };
    Character person;
    cout << "Please enter a name." << endl;
    cin >> person.name;
    cout << "Please enter their age." << endl;
    cin >> person.age;
    cout << "Name: " << person.name << " " << "Age: " << person.age << endl;
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}

void References()
{
  
        int ValueOne;
        int& ValueTwo = ValueOne;
        cout << "Please enter a number." << endl;
        cin >> ValueOne;
        cout << "Value One: " << ValueOne << "ValueTwo: " << ValueTwo << endl;
 
   
    cout << "Please press enter" << endl;
    cin.ignore();
    cin.ignore();
}


