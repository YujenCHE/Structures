#include <iostream>
using namespace std;

struct Point
{
    int g, f, i, ;
};//要加 ;

int main() 
{
	struct Point arr[10];
	
	arr[0].g = 12;
	arr[0].f = 52;
	arr[1].i = 67;

	cout << arr[0].g << " " << arr[0].f << " " << arr[1].i; 
	
	return 0;
}
