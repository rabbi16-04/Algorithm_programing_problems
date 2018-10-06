#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::vector;
using std::endl;

void selectionSortAsc(vector<int> &ivec)
{
	for(auto it = ivec.begin() + 1 ; it != ivec.end() ; it++)
	{
		int key = *it;
		auto it2 = it - 1;
		while ( it2 >= ivec.begin()  && *it2 > key)
		{
			*(it2 + 1) = *it2;
			--it2;
		}
		*(it2 + 1) = key;
	}
}

void selectionSortDesc(vector<int> &ivec)
{
	for(auto it = ivec.begin() + 1 ; it != ivec.end() ; it++)
	{
		int key = *it;
		auto it2 = it - 1;
		while ( it2 >= ivec.begin()  && *it2 < key)
		{
			*(it2 + 1) = *it2;
			--it2;
		}
		*(it2 + 1) = key;
	}
}

int main()
{
    vector<int> ivec;
    ifstream input("numbers.txt");
    ofstream asc("ascending.txt");
    ofstream desc("descending.txt");
    if(!input.is_open())
    {
        cerr << "could not open file" << endl;
        exit(EXIT_FAILURE);
    }
    int val;
    int total = 100;
    // while(input >> val)
    //    ivec.push_back(val);
    for(int i = 0; i != total; i++)
    {
        input >> val;
        ivec.push_back(val);
    }
    
    selectionSortAsc(ivec);
    
    for(auto &it: ivec)
        asc << it << " ";

    selectionSortDesc(ivec);
    
    for(auto &it: ivec)
        desc << it << " ";

}