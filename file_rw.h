#include <fstream>

struct seq_struct
{
	int size;
	int* array;
};

struct seq_struct read_file(std::string file_name)
{
	std::ifstream file(file_name);
	struct seq_struct seq; 
	file >> seq.size;
	seq.array = new int[seq.size];
	for(int i=0;i<seq.size;i++)
	{
		file >> seq.array[i];
	}
	file.close();
	return seq;
}

void write_file(struct seq_struct seq, std::string file_name)
{
	std::ofstream file (file_name);
	file << seq.size << std::endl;
	for(int i=0;i<seq.size;i++)
	{
		file << seq.array[i] << std::endl;
	}
	file.close();
	return;
}
