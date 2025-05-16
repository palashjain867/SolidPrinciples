#include "iostream"
#include "vector"

using namespace std;

class vehicle{
    public:
        virtual void move() = 0;
};

class Enginevehicle : public vehicle{
    public:
        virtual void startEngine() = 0;
};

class car : public Enginevehicle{
    public:
        void startEngine()
        {
            cout << "Starting Car engin....." << endl;
        }
        void move()
        {
            cout << "Car is moving....." << endl;
        }
};

class cycle : public vehicle
{
    public:
        void move()
        {
            cout << "Cycle is moving....." << endl;
        }
};


int main()
{
    vehicle* obj = new cycle();
    obj->move();

    Enginevehicle* obj1 = new car();
    obj1->startEngine();
    obj1->move();
}