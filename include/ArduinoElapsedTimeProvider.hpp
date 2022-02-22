#ifndef INCLUDE_ARDUINOELAPSEDTIMEPROVIDER
#define INCLUDE_ARDUINOELAPSEDTIMEPROVIDER

#include "IElapsedTimeProvider.hpp"

namespace time {
class ArduinoElapsedTimeProvider final : public IElapsedTimeProvider {
 public:
  uint32_t ElapsedMilliseconds() override;
  void WaitSync(int milliseconds) override;
};
}  // namespace time

#endif /* INCLUDE_ARDUINOELAPSEDTIMEPROVIDER */
