#include <stdexcept>
#include <utility>
#include <functional>
#ifndef TRAPEZOIDAL_RULE_HPP
#define TRAPEZOIDAL_RULE_HPP
namespace TrapezoidalRule {
    double sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func);
}
#endif