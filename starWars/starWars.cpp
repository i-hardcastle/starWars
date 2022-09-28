// Ian Hardcastle
// Date: 9/16/22
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


using namespace std;

// Named constants

int main()
{

	// Variable declaration
	string mov1, mov2, mov3, mov4, mov5, mov6, mov7, mov8, mov9;
	int yr1, yr2, yr3, yr4, yr5, yr6, yr7, yr8, yr9;

	ifstream inData;
	ofstream outData;

	inData.open("StarWarsMovieList.txt");
	outData.open("StarWarsMovieList_output.txt");

	//Program title and description for the user

	// User input
	getline(inData, mov1);
	inData >> yr1;
	inData.ignore();
	getline(inData, mov2);
	inData >> yr2;
	inData.ignore();
	getline(inData, mov3);
	inData >> yr3;
	inData.ignore();
	getline(inData, mov4);
	inData >> yr4;
	inData.ignore();
	getline(inData, mov5);
	inData >> yr5;
	inData.ignore();
	getline(inData, mov6);
	inData >> yr6;
	inData.ignore();
	getline(inData, mov7);
	inData >> yr7;
	inData.ignore();
	getline(inData, mov8);
	inData >> yr8;
	inData.ignore();
	getline(inData, mov9);
	inData >> yr9;
	inData.ignore();

	// Calculations

	// Output to the screen

	outData << setw(15) << left << "Episode" << setw(25) << "Movie Name" << setw(13) << right << "Release Year" << endl;
	outData << "--------------------------------------------------------" << endl;
	outData << setw(15) << left << "I" << setw(25) << mov1 << setw(13) << right << yr1 << endl;
	outData << setw(15) << left << "II" << setw(25) << mov2 << setw(13) << right << yr2 << endl;
	outData << setw(15) << left << "III" << setw(25) << mov3 << setw(13) << right << yr3 << endl;
	outData << setw(15) << left << "IV" << setw(25) << mov4 << setw(13) << right << yr4 << endl;
	outData << setw(15) << left << "V" << setw(25) << mov5 << setw(13) << right << yr5 << endl;
	outData << setw(15) << left << "VI" << setw(25) << mov6 << setw(13) << right << yr6 << endl;
	outData << setw(15) << left << "VII" << setw(25) << mov7 << setw(13) << right << yr7 << endl;
	outData << setw(15) << left << "VIII" << setw(25) << mov8 << setw(13) << right << yr8 << endl;
	outData << setw(15) << left << "IX" << setw(25) << mov9 << setw(13) << right << yr9 << endl;
	
	return 0;
}