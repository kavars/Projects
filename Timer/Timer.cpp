//
//  Timer.cpp
//  Timer
//
//  Created by Kirill Varshamov on 28/06/2019.
//

#include "Timer.hpp"

Timer::Timer():
start(std::chrono::high_resolution_clock::now()) //catch start point
{ end = 0;}

Timer::timePoint Timer::checkTimeEnd()
{
    end = std::chrono::high_resolution_clock::now(); //catch end point
    return end;
}

Timer::~Timer()
{
    duration_of_programm = checkTimeEnd() - start; //duration calculation 
    std::cout << "Your code worked: " << duration_of_programm.count() << " second(s)" << std::endl;
}
