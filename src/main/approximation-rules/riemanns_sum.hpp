#include <stdexcept>
#include <utility>
#include <functional>
#ifndef RIEMANNS_SUM_HPP
#define RIEMANNS_SUM_HPP
namespace RiemannsSum {
    double left_sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func);
    double right_sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func);
    double average_sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func);
}
#endif