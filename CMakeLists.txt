project(Eurorack CXX)
cmake_minimum_required(VERSION 3.23)
set (CMAKE_CXX_STANDARD 20)

add_subdirectory(marbles)
add_subdirectory(stm_audio_bootloader)
add_subdirectory(stmlib)
