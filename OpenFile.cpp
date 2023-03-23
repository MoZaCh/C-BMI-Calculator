#include "OpenFile.h"

/*
* Saves to file
* 
* @param name - Takes name as string
* @param bmi - Takes bmi as double
* @return bmi - The given bmi for the values provided
*/
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

/*
* Reads from file line by line and prints to terminal
*/
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