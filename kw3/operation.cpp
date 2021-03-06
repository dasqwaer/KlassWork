#include <iostream>
enum class A {X, Y};
/*
a%b
~a
a&b
a|b
a^b
a<<b
a>>b
*/
/*
a && b - a and b
a || b - a or b
!a - not a
*/

int main () {
    uint8_t x = 0b1111'1110;
    std::cout << static_cast 
     <int> (static_cast<uint8_t>
     (~x));
}