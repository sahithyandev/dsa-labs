#include <iostream>
#include <vector>

using namespace std;

vector<int> getNumbersInput()
{
	vector<int> numbers{};
	int currentNumber;

	do
	{
		cin >> currentNumber;
		numbers.push_back(currentNumber);
	} while (cin.peek() == ' ');

	return numbers;
}

void bubbleSort(vector<int> &numbers)
{
	for (uint passIndex = 0; passIndex < numbers.size() - 1; passIndex++)
	{
		for (uint currentIndex = 0; currentIndex < numbers.size() - passIndex - 1; currentIndex++)
		{
			int currentNumber = numbers[currentIndex];
			int nextNumber = numbers[currentIndex + 1];
			if (currentNumber > nextNumber)
			{
				numbers[currentIndex] = nextNumber;
				numbers[currentIndex + 1] = currentNumber;
			}
		}
	}
}

int main()
{
	vector<int> numbers = getNumbersInput();
	bubbleSort(numbers);
	for (uint i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	return 0;
}