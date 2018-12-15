
// CPP program to illustrate 
// parameterized constructors 
#include <iostream> 
using namespace std; 
  
class Point { 
private: 
    int x, y; 
  
public: 
    // Parameterized Constructor 
    Point(int x1, int y1):x(x1),y(y1){} 
  	Point(const Point &p2)
  	{
  		x=p2.x;
  		y=p2.y;
  	}
    int getX() 
    { 
        return x; 
    } 
    int getY() 
    { 
        return y; 
    } 
}; 
  
int main() 
{ 
    // Constructor called 
    Point p1 = Point(10, 15); 
  	Point p2 = p1;
    // Access values assigned by constructor 
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY(); 
  
    return 0; 
} 
