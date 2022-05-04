#include <iostream>
class Time {
public:
    Time() {};
    Time(int seconds);
    void setHour(int hours);
    void setMinute(int minutes);
    void setSecond(int seconds);
    int getHour();
    int getMinute();
    int getSecond();
    Time operator-(const Time &t) const;
    Time operators(const Time &t) const;
    operator int();
private:
    int hours_;
    int minutes_;
    int seconds_;
    friend std::ostream &operator<<(std::ostream &out, Time &t);
    friend std::istream &operator>>(std::istream &in, Time &t);

};
