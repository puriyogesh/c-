#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> g9;
	for (int i = 1; i <= 10; i++)
		g9.push_back(i);
	cout << "Size : " << g9.size();
	cout << "\nCapacity : " << g9.capacity();
	cout << "\nMax_Size : " << g9.max_size();
	g9.resize(9);
	cout << "\nSize : " << g9.size();
	if (g9.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";
	g9.shrink_to_fit();
	cout << "\nVector elements are: ";
	for (auto it = g9.begin(); it != g9.end(); it++)
		cout << *it << " ";
       return 0;
}