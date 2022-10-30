file(GLOB SOURCES "./*.c" "./*.cpp")

add_library(HallSensorLedDriver STATIC ${SOURCES})
target_include_directories(HallSensorLedDriver PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${PROJECT_SOURCE_DIR}/include/HallSensorLedDriver)
