#include <iostream>
#include <vector>

//#include "sample_EXPORTS.h"
#include "sample.h"

int main()
{
    std::cout << "main.cpp" << std::endl;
    std::vector<Sample> samples;

    for (auto i : {1, 2, 3, 4})
    {
        samples.emplace_back("Hari", i * 10);
    }

    for (auto& sample : samples)
    {
        sample.print();
    }
}