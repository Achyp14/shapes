//
//  main.cpp
//  Shapes
//
//  Created by Andrew Chypurko on 4/8/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include <iostream>
#include "Shape.cpp"

int main(int argc, const char * argv[]) {
    
    Circle *circle1 = new Circle(10);
    circle1 -> draw();
    
    Circle *circle2 = new Circle(20);
    circle2 -> draw();
    
    Square *square1 = new Square(10);
    square1 -> draw();
    
    Square *square2 = new Square(20);
    square2 -> draw();

    delete circle1;
    delete circle2;
    delete square1;
    delete square2;
    
    return 0;
}
