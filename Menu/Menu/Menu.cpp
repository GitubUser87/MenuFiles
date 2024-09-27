// Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
#include "Responses.h"
using namespace std;

int main()
{
    srand(time(NULL));
    char choice;
    do //Menu
    {
        cout << "Please select the cide you wish to see." << endl;
        cout << "1: UserInput." << endl;
        cout << "2: FahrenheitToCelsius." << endl;
        cout << "3: Means." << endl;
        cout << "4: GreaterThanOrEqual." << endl; 
        cout << "5: OddOrEven." << endl;
        cout << "6: LeapYear." << endl;
        cout << "7: Time." << endl;
        cout << "8: ComputeAGrade." << endl;
        cout << "9: ForwardsAndBackwards." << endl;
        cout << "0: SquarredValues." << endl;
        cout << "a: UserInputMenu." << endl;
        cout << "b: Structures." << endl;
        cout << "c: References." << endl;
        cout << "Or press q to quit." << endl;
        cin >> choice;
        switch (choice) //choice list.
        {
        case '1':
            system("cls");
            cout << "You have selected User Input." << endl;
            UserInput();
            system("cls");
            break;
        case '2':
            system("cls");
            cout << "You have selected Fahrenheit to Celsius." << endl;
            FahrenheitToCelsius();
            system("cls");
            break;
        case '3':
            system("cls");
            cout << "You have selected Means." << endl;
            Means();
            system("cls");
            break;
        case '4':
            system("cls");
            cout << "You have selected Greater than or Equal." << endl;
            GreaterThanOrEqual();
            system("cls");
            break;
        case '5':
            system("cls");
            cout << "You have selected Odd or Even." << endl;
            OddOrEven();
            system("cls");
            break;
        case '6':
            system("cls");
            cout << "You have selected Leap Year." << endl;
            LeapYear();
            system("cls");
            break;
        case '7':
            system("cls");
            cout << "You have selected Time." << endl;
            Time();
            system("cls");
            break;
        case '8':
            system("cls");
            cout << "You have selected Compute a Grade." << endl;
            ComputeAGrade();
            system("cls");
            break;
        case '9':
            system("cls");
            cout << "You have selected Forwards and Backwards." << endl;
            ForwardsAndBackwards();
            system("cls");
            break;
        case '0':
            system("cls");
            cout << "You have selected Squarred Values." << endl;
            SquarredValues();
            system("cls");
            break;
        case 'a':
            system("cls");
            cout << "You have selected User Input Menu." << endl;
            UserInputMenu();
            system("cls");
            break;
        case 'b':
            system("cls");
            cout << "You have selected Structures." << endl;
            Structures();
            system("cls");
            break;
        case 'c':
            system("cls");
            cout << "You have selected References." << endl;
            References();
            system("cls");
            break;
        case 'q':
        default:
            break;
        }

    } while (choice != 'q');
    system("cls");
    cout << "Thank you for using the menu." << endl;
    return 0;
}

