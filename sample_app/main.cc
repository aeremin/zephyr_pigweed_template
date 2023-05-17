#include <zephyr/kernel.h>
#include <pw_log/log.h>

int main() {
  PW_LOG_WARN("Hello World!!!");
  while (true) {
    k_sleep(K_SECONDS(1));
    PW_LOG_INFO("Another second passed...");
  }

  return 0;
}
