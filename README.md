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
    std::cout 
}
```

### Supported operators
As of now, plib supports `+, -, +=, -=, ==, !=`. In the future, these will be added: `*=, /=, ++, --`.