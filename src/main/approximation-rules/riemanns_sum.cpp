#include "riemanns_sum.hpp"

double RiemannsSum::left_sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func) noexcept {
    if (n <= 0) 
        throw std::invalid_argument("The number of rectangles (n) should be positive.");
    if (interval.first >= interval.second) 
        throw std::invalid_argument("The given interval [begin, end] should be: begin < end");
    double sum = 0.0;
    for (double step = (interval.second - interval.first) / n, x = interval.first; x < interval.second; x += step) {
        sum += step * func(x);
    }
    return sum;
}

double RiemannsSum::right_sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func) noexcept {
    if (n <= 0) 
        throw std::invalid_argument("The number of rectangles (n) should be positive.");
    if (interval.first >= interval.second) 
        throw std::invalid_argument("The given interval [begin, end] should be: begin < end");
    double sum = 0.0;
    for (double step = (interval.second - interval.first) / n, x = interval.first + step; x <= interval.second; x += step) {
        sum += step * func(x);
    }
    return sum;
}

double RiemannsSum::average_sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func) noexcept {
    if (n <= 0) 
        throw std::invalid_argument("The number of rectangles (n) should be positive.");
    if (interval.first >= interval.second) 
        throw std::invalid_argument("The given interval [begin, end] should be: begin < end");
    double sum = 0.0;
    for (double step = (interval.second - interval.first) / n, x = interval.first; x < interval.second; x += step) {
        sum += step * func((2.0*x+step)/2.0); 
    }
    return sum;
}
