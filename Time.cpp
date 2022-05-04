#include <iostream>
#include <Time.h>

Time::Time(int seconds) {
    hours_ = seconds/3600;
    minutes_ =seconds%3600/60;
    seconds_ = seconds%60;
}

void Time::setHour(int hours) {
    hours_ = hours;
}

void Time::setMinute(int minutes) {
    minutes_ = minutes;
}

void Time::setSecond(int seconds) {
    seconds_ = seconds;
}

Time Time::operators(const Time &t) const{
    return Time(t.hours_*3600 + t.minutes_*60 + t.seconds_);
}

int Time::getHour() {
    return hours_;
}

int Time::getMinute() {
    return minutes_;
}

int Time::getSecond() {
    return seconds_;
}

Time Time::operator-(const Time &t) const{
    return Time((hours_*3600-t.hours_*3600)+(minutes_*60-t.minutes_*60)+(seconds_-t.seconds_));
}

std::ostream &operator<<(std::ostream &out, Time &t) {
    if(t.getHour() != 0)
        out << t.getHour() << "h:";

    if(t.getMinute() < 10)
        out << "0";
    out << t.getMinute() << "m:";

    if(t.getSecond() < 10)
        std::cout << "0";
    out << t.getSecond() << "s";

    return out;
}
std::istream &operator>>(std::istream &in, Time &t) {
    int hour{}, minute{}, second{};
    in >> hour >> minute >> second ;
    t.setHour(hour);
    t.setMinute(minute);
    t.setSecond(second);

    return in;
}

Time::operator int() {
    return hours_*3600+minutes_*60+seconds_;
}
