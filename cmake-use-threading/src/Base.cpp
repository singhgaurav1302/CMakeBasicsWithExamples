#include <iostream>
#include <chrono>
#include "Base.h"

Base::Base()
{
    std::cout << "Base" << std::endl;
}

void Base::start()
{
    std::cout << "Calling thread id: " << std::this_thread::get_id() << std::endl;

    thread_ = std::move(std::thread(&Base::threadFunc, this));
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "thread id: " << thread_.get_id() << std::endl;
    
    thread_.join();
}

void Base::threadFunc()
{
    std::cout << "Threading" << std::endl;
}