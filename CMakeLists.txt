cmake_minimum_required(VERSION 3.10)
project(GuiPCD8544)

set(CMAKE_CXX_STANDARD 14)

find_library(WIRINGPI_LIBRARIES NAMES wiringPi REQUIRED)

include_directories(libPCD8544 ${WIRINGPI_DIRS} libGui libButton)

add_executable(buildliblcd libGui/main.cpp libGui/Item.cpp libGui/Item.h libGui/MenuItems.cpp libGui/MenuItems.h libPCD8544/PCD8544.h libPCD8544/PCD8544.cpp libGui/Button.cpp libGui/Button.h libGui/Button.h libGui/Button.cpp)

target_link_libraries(buildliblcd ${WIRINGPI_LIBRARIES})