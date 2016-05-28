CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(CMakeTemplate)

FIND_PACKAGE(OpenCV REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${OPENCV_INCLUDE_DIR})

set(LIB_SRC ${PROJECT_SOURCE_DIR}/src/TemplateLib.cxx)
set(MAIN_SRC ${PROJECT_SOURCE_DIR}/src/main.cxx)

# build a static library
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(TemplateLib STATIC ${LIB_SRC})


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(main ${MAIN_SRC})
target_link_libraries(main TemplateLib ${OpenCV_LIBS})