#pragma once
#include <string>
#include <fstream>   
#include <iostream>
using namespace std;

class FileOperator
{
public:
	const string readFileName = "d:/input_socket.txt";
	const string writeFileName = "d:/output_socket.txt";
	ifstream inFile;        // obiekt obsługujący odczyt z pliku
	ofstream outFile;
	string readFileContent;

	void WriteToFile();
	void ReadFromFile();
};

