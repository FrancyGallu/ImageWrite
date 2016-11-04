#include <iostream>
#include <cstdlib>
#include "Image.h"

int main()
{
    std::cout<<"testing image\n";
    Image test(200,200);
    test.clearScreen(255,0,0);
    test.save("red.png");
    return EXIT_SUCCESS;
}
