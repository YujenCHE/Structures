#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

int main() 
{
    struct Point p1 = {3, 1};
    
    struct Point *p2 = &p1;
    
    cout << p2 -> x <<"\n"<< p2 -> y;
    //using "->" to point to x and y (in p1 = {3, 1})
	
	return 0;
}
