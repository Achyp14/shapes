//
//  Shape.cpp
//  Shapes
//
//  Created by Andrew Chypurko on 4/8/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include "Shape.hpp"
#include <iostream>

using namespace std;

class Shape {
protected:
    long x;
    long y;
    
    // Default constructor
    Shape(){}
    
    Shape(long _x, long _y) {
        x = _x;
        y = _y;
    }
    
    // Destructor
    virtual ~Shape() {
    }
    
    // Function for calculating perimeter of shape
    virtual void draw() = 0;
    virtual float perimeter() = 0;
};

class Circle : Shape {
public:
    float r;
    
    Circle(long _r) {
        r = _r;
    }
    
    // 2 * P * r
    float perimeter() override {
        return 2 * 3.14 * r;
    };
    
    void draw() override {
        cout << "Circle's perimeter = "<< perimeter() << "\n";
    }
    
    ~Circle() {
        r = 0;
        cout << "Circle is deleted" << "\n";
    }
};

class Square : Shape {
public:
    Square(int x) : Shape(x, 0) {
    }
    
    float perimeter() override {
        return 4 * x;
    };
    
    void draw() override {
        cout << "Square's perimeter = "<< perimeter() << "\n";
    }
    
    ~Square() override {
        x = 0;
        y = 0;
        cout << "Square is deleted" << "\n";
    }
};

