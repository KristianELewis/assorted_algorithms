//quick program that generates a sequence of random numbers based on input criteria
//It will place this sequence in a file

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;



int main()
{

	int seq_size = 0; //the size of the sequence
	int range_min = 0, range_max = 0; //the minimum and maximum numbers in the sequence;
	string file_name;// name of the output file which store the sequence
	ofstream output_file;


	cout << "Input the size of the sequence" << endl;
	cin >> seq_size;
	while(seq_size <= 0)
	{
		cout << "Invalid input, size must be large than 0";
		cin >> seq_size;
	}

       	cout << "Input minimum number" << endl;
	cin >> range_min;
	cout << "input maximum number" << endl;
	cin >> range_max;


	cout << "Input output file name" << endl;
	cin >> file_name;
	output_file.open(file_name);

	output_file << seq_size << endl;
	for (int i = 0; i<seq_size; i++)
	{
		output_file << range_min + rand() % (range_max - range_min + 1)  << endl;
	//min +rand() % (max-min+1)
	}
	output_file.close();
}
