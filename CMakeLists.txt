cmake_minimum_required(VERSION 3.10)
project(autoUploadData)

set(CMAKE_CXX_STANDARD 14)

#find_package(CURL REQUIRED)
#find_package(Threads REQUIRED)
include_directories(libPCD8544 ${WIRINGPI_DIRS} libGui libButton)
#include_directories(${CURL_INCLUDE_DIRS})

#include_directories(libFTP libCNU libPCD8544 ${WIRINGPI_DIRS})

#add_executable(autoUploadData mainCNU.cpp libCNU/FileInfo.cpp libCNU/FileInfo.h libCNU/blockingQueue.h libCNU/checkFileUpdate.cpp libCNU/checkFileUpdate.h debug_macro.h libFTP/CurlHandle.cpp libFTP/CurlHandle.h libFTP/FTPClient.cpp libFTP/FTPClient.h libCNU/FTPUpload.cpp libCNU/FTPUpload.h)
#add_executable(mountfile mainMountFile.cpp libMountFile/mountManager.h libMountFile/mountManager.cpp debug_macro.h)
#add_executable(testGPIO libGPIO/main.cpp)

#add_executable(buildliblcd libGui/main.cpp libGui/Item.cpp libGui/Item.h libGui/MenuItems.cpp libGui/MenuItems.h)
#add_executable(test main.cpp main.cpp)
#target_link_libraries(autoUploadData ${CURL_LIBRARIES} stdc++fs ${CMAKE_THREAD_LIBS_INIT})
#target_link_libraries(testGPIO ${WIRINGPI_LIBRARIES})


find_library(WIRINGPI_LIBRARIES NAMES wiringPi REQUIRED)
#add_executable(testlcd libGui/main.cpp libPCD8544/PCD8544.h libPCD8544/PCD8544.cpp)
add_executable(buildliblcd libGui/main.cpp libGui/Item.cpp libGui/Item.h libGui/MenuItems.cpp libGui/MenuItems.h libPCD8544/PCD8544.h libPCD8544/PCD8544.cpp libGui/Button.cpp libGui/Button.h libGui/Button.h libGui/Button.cpp)
target_link_libraries(buildliblcd ${WIRINGPI_LIBRARIES})