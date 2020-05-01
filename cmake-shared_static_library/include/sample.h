#include <string>

class Sample
{
    std::string name_;
    uint8_t age_;

public:
    Sample();
    Sample(const std::string& name, uint8_t age);

    void print() const;
};