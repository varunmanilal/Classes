#include <iostream>

using namespace std;

class rectangle{
public:
    double length;
    double breadth;
    
    double area();
    double perimeter();
    
    };
    
    double rectangle::area()
    {
        return length*breadth;
    }
    double rectangle::perimeter()
    {
        return 2*(length + breadth);
    }
int main()
{ 
    rectangle rect1;
    rectangle rect2;
    double area;
    double perimeter;
    double a1,a2,b1,b2;
    
    cout<<"Give the length and breadth of the first rectangle"<<endl;
    cin>>a1;
    cin>>b1;
    cout<<"Give the length and breadth of the second rectangle"<<endl;
    cin>>a2;
    cin>>b2;
    rect1.length=a1;
    rect1.breadth=b1;
    rect2.length=a2;
    rect2.breadth=b2;
    cout<<"The area and perimeter of the 1st rectangle is: "<<rect1.area<<" and "<<rect1.perimeter<<endl;
    cout<<"The area and perimeter of the 2nd rectangle is: "<<rect2.area<<" and "<<rect2.perimeter<<endl;
    if (rect1.area>rect2.area)
{
    cout<<"The area of rectangle 1 is greater than that of rectangle 2"<<endl;
}
    if else(rect1.area=rect2.area){
        cout<<"The area of rectangle 1 is equal to the area of rectangle 2"<<endl;
    }
    else{
        cout<<"The area of rectangle 2 is greater than that of rectangle 1"<<endl;
    }
    if (rect1.perimeter>rect2.perimeter)
{
    cout<<"The perimeter of rectangle 1 is greater than that of rectangle 2"<<endl;
}
    if else(rect1.perimeter=rect2.perimeter){
        cout<<"The perimeter of rectangle 1 is equal to the area of rectangle 2"<<endl;
    }
    else{
        cout<<"The perimeter of rectangle 2 is greater than that of rectangle 1"<<endl;
    }
    
    
    return 0;
    }
