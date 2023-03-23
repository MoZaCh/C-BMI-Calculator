#include <iostream>
#include "BMICalculator.h"
#include "OpenFIle.h"

using namespace std;


int main()
{
    int choice = 0;
    string name;
    double height, weight, bmi;
    bool quit = false; //Flag set to false for the do-while loop

    do
    {
        cout << "1) BMI Calculator" << endl;
        cout << "2) BMI History" << endl;
        cout << "3) Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Name: " << endl;
            cin >> name;
            cout << "Enter height: " << endl;
            cin >> height;
            cout << "Enter weight: " << endl;
            cin >> weight;
            bmi = BMICalculator(height, weight); //Calling the bmi function with given arguments
            cout << "BMI for: " << name << " is " << bmi << endl;
            SaveToFile(name, bmi); //Calling the save to file function
            break;

        case 2:
            readFromFile(); //Calling the read from file function
            break;

        case 3:
            quit = true;
        }

    } while (!quit);

    return 0;
}
