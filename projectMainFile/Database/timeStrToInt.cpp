#include <string>
#include <iostream>

using namespace std;

const int MAX_TIME_LEN = 20;

int chinNumToInt(string chin)
{
	string dict[11] ={ "零" ,"一","二","三","四","五","六","七", "八", "九", "十" };
	for (int i = 0; i < 11; i++)
	{
		if (chin == dict[i])
			return i;
	}
	return -1;
}

int cusStoi(string str)
{
	if (isalpha(str.at(0)))
	{
		char dict[4] = { 'A', 'B', 'C', 'D' };
		for (int i = 0; i < 4; i++)
		{
			if (str.at(0) == dict[i])
				return i + 11;
		}
	}
	else return stoi(str);
}

bool cusisDigit(char a)
{
	try
	{
		if (a >= 225 or a < 0)
			return false;
		if (isdigit(a))
			return true;
		else if (a == 'A' or a == 'B' or a == 'C' or a == 'D')
			return true;
		return false;
	}
	catch (exception& e)
	{
		return false;
	}
}

int* timeStrToIntArr(string timeStr)
{
	int* resultArr = new int[MAX_TIME_LEN];
	int index = 0;
	int currentDay = 1;
	for (int i = 0; i < MAX_TIME_LEN; i++)
	{
		resultArr[i] = 0;
	}
	for (int i = 0; i < timeStr.length(); i++)
	{
		if (cusisDigit(timeStr.at(i)))
		{
			resultArr[index] = currentDay * 100 + cusStoi(timeStr.substr(i, 1));
			index++;
		}
		else if (timeStr.at(i) == ' ')
		{
			continue;
		}
		else //漢�?
		{
			currentDay = chinNumToInt(timeStr.substr(i, 2));
			i++;
		}
	}
	return resultArr;
}


int main(int argc, char* argv[])
{
	string str;
	for (int i = 1; i < argc; i++)
	{
		str += argv[i];
	}
	int* arr = timeStrToIntArr(str);
	for (int i = 0; i < 20; i++)
		cout << arr[i] << " ";
	delete[] arr;
}
