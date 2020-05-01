#include <iostream>

#include "sample.h"

Sample::Sample()
{
    std::cout << "Default Constructor" << std::endl;
}

Sample::Sample(const std::string& name, uint8_t age) 
    : name_ {name}, age_{age}
{
    std::cout << "Sample Parameterized Constructor" << std::endl;
}

void Sample::print() const
{
    std::cout << "Name: " << name_ << ", age: " << static_cast<int>(age_) << std::endl;
}