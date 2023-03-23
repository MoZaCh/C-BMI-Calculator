#include "OpenFile.h"

void SaveToFile(string name, double bmi)
{
	ofstream file;
	file.open("BMI_History.txt", std::ios_base::app); //Append to file instead of overwriting

	if (file.is_open()) //Check that the file is open
	{
		file << name << " : " << bmi << " : " << __DATE__ << "\n";
	}
	file.close(); //Close file
}

void readFromFile()
{
	cout << "Reading from file..." << endl;
	fstream file;
	file.open("BMI_History.txt", ios::in);

	if (file.is_open()) //Check that the file is open
	{
		string line;
		while (getline(file, line))
		{
			cout << line << "\n";
		}
	}
	file.close(); //Close file
}