# Sample application

Note: one repository can contain any number of applications/firmwares, but they
need to reside in separate subfolders. Also because of the way Zephyr RTOS cmake
setup works, every firmware must be a separate CMake project / has its own
root CMakeLists.txt file. It's not possible to have a root CMakeLists.txt for
multiple apps.
