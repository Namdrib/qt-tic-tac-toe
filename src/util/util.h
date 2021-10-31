#ifndef UTIL_H
#define UTIL_H

namespace util {
template <typename T>
static bool in_bounds(T low, T high, T target) {
  return target > low && target < high;
}
};  // namespace util

#endif  // UTIL_H
