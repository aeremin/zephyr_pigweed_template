cmake_minimum_required(VERSION 3.20)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(sample_app)
enable_language(C CXX)

target_sources(app
  PRIVATE
    main.cc
 )

target_link_libraries(app
  PRIVATE
    pw_log
    pw_thread.sleep
    pw_chrono.system_clock
)
