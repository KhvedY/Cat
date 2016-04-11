#include <Windows.h>
#include <vector>
#include <string>
using namespace std;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{
	vector<int> numbers;
	int thisNum = 500;
	int maxNum = 1000;
	int minNum = 0;
	int button;
	bool finish = false;
	TCHAR buffer[50];
	
	while (true)
	{
		wsprintf(buffer, TEXT("%d"), thisNum);

		button = MessageBox(0, buffer, buffer, MB_YESNOCANCEL | MB_ICONQUESTION);

		if (button == IDYES)
			break;
		else if (button == IDNO)
		{
			minNum = thisNum;
			thisNum = minNum + (maxNum - minNum) / 2;
		}
		else if (button == IDCANCEL)
		{
			maxNum = thisNum;
			thisNum = minNum + (maxNum - minNum) / 2;
		}
		numbers.push_back(thisNum);
		if (maxNum<minNum)
		{
				finish = true;
				break;
			}
		}
	

	if (finish)
	{
		MessageBox(0, L"Still playing?", L"Error!", MB_OK | MB_ICONSTOP);
	}
	else
	{
		string str;
		str.append("History: ");
		int counter = 0;
		for (auto elem : numbers)
		{
			counter++;
			str.append(to_string(elem));
			if (counter != numbers.size())
				str.append(", ");
		}

		if (numbers.size())
			str.append(".");
		str.append("\nCorrect number is: ");
		str.append(to_string(thisNum));

		TCHAR* res;
		res = new TCHAR[str.size() + 1];

		for (size_t i = 0; i < str.size(); i++)
			res[i] = str[i];

		res[str.size()] = '\0';

		MessageBox(0, res, L"Victory!", MB_OK | MB_ICONASTERISK);

		delete[] res;
	}
}
