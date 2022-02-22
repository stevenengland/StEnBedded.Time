#ifndef INCLUDE_IELAPSEDTIMEPROVIDER
#define INCLUDE_IELAPSEDTIMEPROVIDER

#include <stdint.h>  // NOLINT

namespace time {
class
    IElapsedTimeProvider {  // NOLINT(cppcoreguidelines-special-member-functions,hicpp-special-member-functions)
 public:
  virtual ~IElapsedTimeProvider() = default;

  virtual uint32_t ElapsedMilliseconds() = 0;
  virtual void WaitSync(int milliseconds) = 0;
};
}  // namespace time

#endif /* INCLUDE_IELAPSEDTIMEPROVIDER */
