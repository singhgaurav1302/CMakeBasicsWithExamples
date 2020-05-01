#include <thread>

class Base
{
    std::thread thread_;
public:
    Base();
    void start();
    void threadFunc();
};