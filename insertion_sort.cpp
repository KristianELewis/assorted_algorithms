#include <iostream>
#include "file_rw.h"

using namespace std;

int main()
{
	struct seq_struct seq;
	seq = read_file("test.txt");
	
	/*cout << "size: " << seq.size << endl;
	for(int i =0; i < seq.size;i++)
	{
		cout << i << ": " << seq.array[i] << endl; 
	}
	cout << "read test done" << endl;
	testing output*/ 
	
	
	write_file(seq, "test2.txt");	
}
