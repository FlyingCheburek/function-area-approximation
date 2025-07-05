#include "trapezoidal_rule.hpp"

double TrapezoidalRule::sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func) {
    if (n <= 0) 
        throw std::invalid_argument("The number of rectangles (n) should be positive.");
    if (interval.first >= interval.second) 
        throw std::invalid_argument("The given interval [begin, end] should be: begin < end");
    double sum = func(interval.first) + func(interval.second); 
    for (double step = (interval.second - interval.first) / n, x = interval.first + step; x < interval.second; x += step) {
        sum += 2.0 * func(x);
    }
    return sum * ((interval.second - interval.first) / (2.0 * n)); 
}
