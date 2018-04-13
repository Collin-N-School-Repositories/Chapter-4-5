#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int delagates;
string votes;
int candidate1;
int candidate2;
int candidate3;
int main()
{
ifstream myfile("election.txt");
if (myfile.is_open())
	{
	myfile >> delagates;
	'\n';
	myfile >> votes;

	myfile.close();
	}
	else cout << "Unable to open file ";
	countvotes;




	
	system("pause");
	return 0;
	
}
int countvotes(){
	char firstChar;
	int count = 0;
	
	do{
		firstChar = votes[0];
		for (string::size_type i = 0; i < votes.length(); i++)
		{
			if (votes[i] == firstChar)
			{
				++count;
			}
			
		}
	} while (votes != "");
}
