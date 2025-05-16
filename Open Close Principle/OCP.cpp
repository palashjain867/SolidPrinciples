#include "iostream"
#include "vector"

using namespace std;

class shape{
public:
    virtual double area() = 0;
};

class rectangle : public shape
{
    double length;
    double breadth;
public:
    
    rectangle(double len, double wid) : length(len), breadth(wid){}

    double area() override
    {
        cout << "Area of rectangle is : " << length * breadth << endl;
        return length * breadth;
    }
};

class sqaure : public shape
{
    double length;
public:
    
    sqaure(double len) : length(len){}
    
    double area() override
    {
        cout << "Area of square is : " << length * length<< endl;
        double r_area = length*length;
        return r_area;
    }
};

void totalArea(const vector<shape*>& shapes)
{
    double total = 0;
    for(const auto& shapeobj : shapes)
    {
        total += shapeobj->area();
    }

    cout << "Total area is : " << total << endl;
}

int main()
{
    vector<shape*> shapes;
    shapes.push_back(new rectangle(4,5));
    shapes.push_back(new sqaure(3));

    totalArea(shapes);
    
    return 0;
}