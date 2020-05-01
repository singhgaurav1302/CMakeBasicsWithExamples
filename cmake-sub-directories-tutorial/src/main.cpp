#include <iostream>
#include <vector>

#include "sample.h"

int main()
{
    std::vector<Sample> samples;

    for (auto i : {1, 2, 3, 4, 5, 6})
    {
        samples.emplace_back("Hari", i * 10);
    }

    for (auto& sample : samples)
    {
        sample.print();
    }
}