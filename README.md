# Cute++ / Cute Plus Plus / cutepp #

## Prerequisites

gtest: installed globally
```cmake
find_package(GTest REQUIRED)
target_link_libraries(cutepp_test GTest::gtest GTest::gmock)
```

supported platforms (or should supported)

- Windows *
    - https://docs.microsoft.com/en-us/windows/win32/winmsg/using-messages-and-message-queues
- Linux
    - X11
        - https://cs.lmu.edu/~ray/notes/x/
        - http://mech.math.msu.su/~vvb/2course/Borisenko/CppProjects/GWindow/xintro.html
    - GTK (Ubuntu 20, default)
    - Wayland (Ubuntu 20 with wayland)
- Android
- iOS
- Mac
