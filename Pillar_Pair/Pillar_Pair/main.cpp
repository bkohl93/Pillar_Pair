//  main.cpp
//  Author: Ben Kohl
//  Date: 1/26/16

#include <iostream>
#include "tests.h"

int main(int argc, char * argv[])
{

    std::cout << "Hello World!" << std::endl;
    
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
