#pragma once
/// Sorter class
/// Implementation of sorting algorithms will be done here

#include <windows.h>
#include <iostream>
#include "data.h"

class Sorter
{
private:
	/// Data Members
	SortingOption sortType;
	int* sortingArr;
	unsigned int sortingArrSize;

	/// Constants
	const int MIN_NUM = 0;
	const int MAX_NUM = 100;

	/// Private Functions
private:
	void ShowTitle();
	void ShowMenu();
	void GetUserInputMode();
	void PrintArr();

	/// UI Configurations Functions
	void SetColor(Color color);
	void ResetColor();
	void PrintWarning(std::string msg);
	void PrintError(std::string msg);

	/// Array Setup Function
	int Random(int min, int max);
	void CreateRandomArr(unsigned int size);
	void CreateSortedArr(unsigned int size);
	void DeleteArr();


public:
	/// Constructor and Destructor
	Sorter();
	~Sorter();

	/// Functions
	void Start();
};

