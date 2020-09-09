# Position Library for C++
### Usage:
```c++
int main() {
    // This will set the vector's x and y coords respectively to 0
    plib::Vector2 myVector2(0, 0);
    // This will set the vector's x to 5, and y to 3
    plib::Vector2 myOtherVector2(5, 3);

    /*
        this is the same as this:
        plib::Vector2 newVector(0, 0);
        newVector.x = myVector2.x + myOtherVector2.x;
        newVector.y = myVector2.y + myOtherVector2.y;
    */
    plib::Vector2 newVector = myVector2 + myOtherVector2;
}
```

### Supported operators
As of now, plib supports `+, -, +=, -=, ==, !=` to modify vectors. In the future, these will be added: `*=, /=, ++, --`.

## Example program
```c++
#include <iostream>
#include <string>
#include "pos_utils.h"

int main() {
    plib::Vector2 point1(10, 10);
    plib::Vector2 point2(5, 5);
    plib::Vector2 point3 = point1 + point2;
    plib::Vector2 point4 = point1 - point2;
    plib::Vector2 point5(2, 2);
    plib::Vector2 point6(2, 2);
    plib::Vector2 point7(15, 15);

    point5 -= point1;
    point6 += point1;

    std::cout << "Point 1: " << point1.x << " " << point1.y << std::endl;
    std::cout << "Point 2: " << point2.x << " " << point2.y << std::endl;
    std::cout << "Point 3: " << point3.x << " " << point3.y << std::endl;
    std::cout << "Point 4: " << point4.x << " " << point4.y << std::endl;
    std::cout << "Point 5: " << point5.x << " " << point5.y << std::endl;
    std::cout << "Point 6: " << point6.x << " " << point6.y << std::endl;
    std::cout << "Point 7: " << point7.x << " " << point7.y << std::endl;

    std::cout << std::endl;

    if(point1 == point2) std::cout << "Point 1 is the same as point 2" << std::endl;
    if(point7 != point6 && point7 == point3) std::cout << "Point 7 is the same as point 3 but different to point 6" << std::endl;
    std::cout << "Distance from point1 to point2: " << plib::Vector2::getLength(point1, point2) << std::endl;
    std::cout << "Distance from point1 to point2 on the x axis: " << plib::Vector2::getXDist(point1, point2) << std::endl;
}
```