#include<iostream>
using namespace std;
class Shape {
protected:
    int x, y;

public:
    void get_data() {
        cout<<"\nEnter first dimension: ";
        cin>>x;
        cout<<"Enter second dimension: ";
        cin>>y;
    }

    virtual void display_area() = 0;  
};

class Triangle : public Shape {
public:
    void display_area() {
        double area = 0.5 * x * y; 
        cout<<"Area of triangle = "<< area<<endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        int area = x * y; 
        cout<<"Area of rectangle = "<<area<<endl;
    }
};

int main() {
    Shape* st;  
    Triangle t;
    Rectangle r;
    cout<<"Geometrical Shapes Area calculator\n";
    st = &t; 
    
    st->get_data();  
    st->display_area();  

    st = &r;

    st->get_data();  
    st->display_area();  
   
    return 0;
}
