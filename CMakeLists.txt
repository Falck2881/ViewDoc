cmake_minimum_required(VERSION 3.21)

project(ViewDocument VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets Core  REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        MainWindow.cpp
        MainWindow.h
        SplashScreen.h
        SplashScreen.cpp
)

qt6_add_resources(IMG "${CMAKE_CURRENT_SOURCE_DIR}/Resources/Image.qrc")

add_executable(ViewDocument ${PROJECT_SOURCES} ${IMG})


target_link_libraries(ViewDocument PRIVATE Qt6::Widgets
                                           Qt6::Core)


if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ViewDocument)
endif()
