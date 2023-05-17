#include <chrono>

#include <zephyr/kernel.h>

#include <pw_chrono/system_clock.h>
#include <pw_log/log.h>
#include <pw_thread/sleep.h>

int main() {
  PW_LOG_WARN("Hello World!!!");
  while (true) {
    pw::this_thread::sleep_for(
      pw::chrono::SystemClock::for_at_least(std::chrono::seconds(1)));
    PW_LOG_INFO("Another second passed...");
  }

  return 0;
}
