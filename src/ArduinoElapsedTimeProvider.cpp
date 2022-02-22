#include "ArduinoElapsedTimeProvider.hpp"

#include "Arduino.h"

namespace time {
uint32_t ArduinoElapsedTimeProvider::ElapsedMilliseconds() { return millis(); }

void ArduinoElapsedTimeProvider::WaitSync(int milliseconds) {
  delay(milliseconds);
}

}  // namespace time