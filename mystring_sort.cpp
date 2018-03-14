#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#define NUMWORDS 20

void bubbleSortDuplicates(string list[], int length);
void noDuplicateBubble(string list[], int length);

int main(int argc, const char * argv[])
{
	string words[NUMWORDS];
	ifstream inFile;
	inFile.open("lab3input.txt", ifstream::in);
	
	int count = 0;
	cout << "The sequence of lines before sorting:" << endl;
	while (getline(inFile, words[count++], '\n'))
	{
		cout << words[count]  <<endl;
 
	}
	inFile.close();

	bubbleSortDuplicates(words, NUMWORDS);
	noDuplicateBubble(words, NUMWORDS);
	return 0;
}

void bubbleSortDuplicates(string list[], int length)
{
	string temp;
	int iteration;
	int index;

	for (iteration = 0; iteration < length; iteration++)
	{
		for (index = 0; index < length - iteration; index++)
		{
			if (list[index] > list[index + 1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}
	}
	cout <<  "The sequence of lines after sorting:" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << list[i] << endl;
	}
}
void noDuplicateBubble(string list[], int length)
{
        string temp;
        int iteration;
        int index;

        for (iteration = 0; iteration < length; iteration++)
        {
                for (index = 0; index < length - iteration; index++)
                {
                        if (list[index] > list[index + 1])
                        {
                                temp = list[index];
                                list[index] = list[index + 1];
                                list[index + 1] = temp;
                        }
                }
        }
	cout << "The sequence of lines after sorting (no duplicates):" << endl;
        for (int i = 0; i < length; i++)
        {
		if(list[i] != list[i + 1])
		{
               		 cout << list[i] << endl;
		}
        }
}

