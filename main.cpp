#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> build_array()
{
	//Variable definition
	int arr_count = 0, i = 0;
	vector<int> arr_of_num;
	int in_num;

	//Input number of array elements needed
	cout << "How many elements do you want to build into the array?";
	cin >> arr_count;

	// Create the array
	for(i = 0; i < arr_count; i++)
	{
		cout << "Input an array element: ";
		cin >> in_num;
		arr_of_num.push_back(in_num);
	}
	return arr_of_num;
}

void main()
{
	vector<int> local_arr = build_array();
}