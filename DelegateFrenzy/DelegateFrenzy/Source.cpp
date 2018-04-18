#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int delagates;
string votes;
int candidate1 = 0;
char candidateone;
char candidatetwo;
char candidatethree;
int candidate2 = 0;
int candidate3 = 0;


int countvotes(){
	char firstChar;
	int count = 0;

	do{
		firstChar = votes[0];
		for (string::size_type i = 0; i < votes.length(); ++i)
		{
			if (count == 1){
				if (votes[i] == firstChar)
				{
					++candidate1;
					candidateone = firstChar;
					votes.erase(std::remove(votes.begin(), votes.end(), firstChar), votes.end());
				}
			}
			else if (count == 2){
				if (votes[i] == firstChar)
				{
					++candidate2;
					candidatetwo = firstChar;
					votes.erase(std::remove(votes.begin(), votes.end(), firstChar), votes.end());
				}
			}
			else if (count == 3){
				if (votes[i] == firstChar)
				{
					++candidate3;
					candidatethree = firstChar;
					votes.erase(std::remove(votes.begin(), votes.end(), firstChar), votes.end());
				}
			}
		}
		++count;
	} while (votes != "");
	return candidate1,candidate2,candidate3;
}
int canaditeMath(){

	if (candidate1 > (delagates / 2)){
		candidate1 = delagates;
		candidate2 = 0;
		candidate3 = 0;
	}
	else if (candidate2 > (delagates / 2)){
		candidate2 = delagates;
		candidate1 = 0;
		candidate3 = 0;
	}
	else if (candidate3 > (delagates / 2)){
		candidate3 = delagates;
		candidate1 = 0;
		candidate2 = 0;
	}
	else{
		if (candidate1 < (delagates * 0.15)){
			candidate1 = 0;
		}
		if (candidate2 < (delagates * 0.15)){
			candidate2 = 0;
		}
		if (candidate3 < (delagates * 0.15)){
			candidate3 = 0;
		}
	}
	return candidate1,candidate2,candidate3;
}
int main()
{
ifstream myfile("election.txt");
if (myfile.is_open())
	{
	myfile >> delagates;
	'\n';
	myfile >> votes;
	countvotes();
	//canaditeMath();
	cout << "The Votes have been counted the results are below " << endl;
	cout << candidateone << ":" << candidate1 << endl;
	cout << candidatetwo << ":" << candidate2 << endl;
	cout << candidatethree << ":" << candidate3 << endl;
	myfile.close();
	}
	else cout << "Unable to open file ";
	
	system("pause");
	return 0;
	
}

