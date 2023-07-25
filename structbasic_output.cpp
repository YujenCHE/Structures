#include <iostream>
using namespace std;

struct Point
{
    int x = 0;
    int y = 2;
};

int main() 
{
	struct Point k;
	cout << "x = " << k.x << " and y = " << k.y;
	//要用structure裡面的數時，用在main定義的variable名字加上"."和structure裡的變數名
	
	k.y = 14;
	cout <<"\nAfter changes, x = " << k.x <<" and y = " << k.y;
	
	return 0;
}
