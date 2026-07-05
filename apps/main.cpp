// demo that tests the code

#include "Vector3.hpp"
#include <iostream>

int main() {

    dotty::Vector3 wallNormal{0.0f, 1.0f, 0.0f};
    // a wall facing straight up the Y-axis

    dotty::Vector3 flashlightDirect{0.0f, 1.0f, 0.0f};
    // case 1: flashlight pointing straight at the wall
    
    dotty::Vector3 flashlightTilted = dotty::normalize(dotty::Vector3{1.0f, 1.0f, 0.0f});
    // case 2: flashlight tilted halfway (45 degrees)

    dotty::Vector3 flashlightMiss{1.0f, 0.0f, 0.0f};
    // case 3: flashlight turned completely away/parallel

    std::cout << "Dotty math demo\n\n";
    std::cout << "direct hit product: " << dotty::dot(wallNormal, flashlightDirect) << " (max brightness)\n";
    std::cout << "glancing blow product: " << dotty::dot(wallNormal, flashlightTilted) << " (dimmer light)\n";
    std::cout << "total miss product: " << dotty::dot(wallNormal, flashlightMiss) << " (no light hits)\n";

    return 0;
}