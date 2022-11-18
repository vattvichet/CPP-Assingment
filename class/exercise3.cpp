#include <iostream>
#include <string>
using namespace std;

// create a class
class Fan
{
    const int SLOW = 1;
    const int MEDIUM = 2;
    const int FAST = 3;

private:
    int speed;
    bool on;
    double radius;
    string color;

public:
    // A method to initialize private variables
    Fan()
    {
        speed = MEDIUM;
        on = false;
        radius = 5;
        color = string("blue");
    }
    int getSpeed()
    {
        return speed;
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
    bool isOn()
    {
        return on;
    }
    void setOn(bool trueOrFalse)
    {
        this->on = trueOrFalse;
    }
    double getRadius()
    {
        return radius;
    }
    void setRadius(double radius)
    {
        this->radius = radius;
    }
    string getColor()
    {
        return color;
    }
    void setColor(string color)
    {
        this->color = color;
    }
};

int main()
{
    cout << "First fan properties: " << endl;
    // create object of cylinder class
    Fan fan;
    // assign value to data members
    fan.setSpeed(3);
    fan.setRadius(10);
    fan.setOn(true);
    fan.setColor("yellow");
    // calculate and display the area and volume of the cylinder
    cout << "Fan speed: " << fan.getSpeed() << endl;
    cout << "Fan radius: " << fan.getRadius() << endl;
    cout << "Fan color: " << fan.getColor() << endl;
    cout << "Fan is on " << endl;

    Fan fan1;
    fan.setSpeed(2);
    fan.setRadius(5);
    fan.setOn(false);
    fan.setColor("blue");

    cout << "\nSecond fan properties: " << endl;
    cout << "Fan speed: " << fan1.getSpeed() << endl;
    cout << "Fan radius: " << fan1.getRadius() << endl;
    cout << "Fan color: " << fan1.getColor() << endl;
    cout << "Fan is off " << endl;

    return 0;
}