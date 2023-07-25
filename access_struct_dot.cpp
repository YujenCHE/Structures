#include <iostream>
using namespace std;

struct Point
{
    int a,b;
};

int main() 
{
    struct Point PA = {3,6};
    cout << "a = " << PA.a <<" and b = " << PA.b;
	
	return 0;
}
