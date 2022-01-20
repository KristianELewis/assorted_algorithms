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
	

	int key;
	for(int i=1; i < seq.size; i++)
	{
		key = seq.array[i];
	       	int j = i;
		while(j > 0 && seq.array[j-1]>key)
		{
			j--;
			seq.array[j+1] = seq.array[j];
			
		}	
		seq.array[j] = key;
	}



	write_file(seq, "test2.txt");	
}
