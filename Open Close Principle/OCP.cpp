#include "iostream"
using namespace std;

class shape{
public:
    virtual void area() = 0;
};

class rectangle : public shape
{
public:
    int length;
    int breadth;
    void area()
    {
        cout << "Area of rectangle is : " << length * breadth << endl;
    }
};

int main()
{
    
    return 0;
}