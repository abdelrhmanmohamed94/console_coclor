#include <iostream>
#include <string>
using namespace std;
enum enscreencolor{red=1,blue=2,yellow=3,green=4};
void readchosecolor(int& num)
{
	cout << "******************************\n\n";
	cout << " please chose anumber of your color \n";
	cout << " red =1 \n";
	cout << " blue =2 \n";
	cout << " yellow = 3 \n";
	cout << " green = 4 \n\n";
	cout << "******************************\n";
	cout << " your choise ? \n";
	cin >> num;

}
void shawcolor(enscreencolor color ,int num)
{
	color = (enscreencolor)num;
	if (color == enscreencolor::red)
	{
		system("color 4F");
	}
	else if (color == enscreencolor::blue)
	{
		system("color 1F");
	}
	else if (color == enscreencolor::green)
	{
		system("color 2F");
	}
	else if (color == enscreencolor::yellow)
	{
		system("color 6F");
	}
	else
	{
		cout << "rong chose \n";
	}
}


int main()
{
	int num;
	enscreencolor color{};
	readchosecolor(num);
	shawcolor( color ,num);
	

	
	return 0;
}