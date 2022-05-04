#include <iostream>
#include <Time.h>


int main()
{
    Time t1(200);
    std::cout << t1 << std::endl; // displays 03m:20s
    Time t2;
    std::cout << "Enter final time" << std::endl;
    std::cin >> t2; // user enters 10h:12m:01s
    std::cout << t2 << std::endl;
    Time t3 = t2 - t1; // 10h:8m:41s
    std::cout << t3 << std::endl;
    int t3s = t3; // 36521
    std::cout << t3s;
}
