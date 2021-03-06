cmake_minimum_required(VERSION 3.5)
if(NOT CMAKE_PROJECT_NAME)
project(${target} LANGUAGES CXX)
endif()
set(target "HERP.FrontendInterface")
add_definitions(-D_BUILDING_HERP_FRONTEND_INTERFACE)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB SRC
    "*.cpp"
)
file(GLOB HEADER
    "*.h"
    "*.hpp"
    )
add_subdirectory(data)
add_library(${target} SHARED ${SRC})

target_precompile_headers(${target}
 PUBLIC
  "HERP.FrontendInterface.Precompiled.h"
 )
find_package(Qt5Core REQUIRED)
find_package(Qt5HttpServer REQUIRED)
find_package(Qt5Xml REQUIRED)
if(${PACKAGE})
find_package(ApplicationServer)
endif()
qt5_use_modules(${target} Core HttpServer Xml)

target_include_directories(${target} PUBLIC 
 PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${INCLUDE_FOLDER}>
)    
target_link_libraries(${target} ApplicationServerInterface ApplicationServerCore QxOrm ODataServer)
install(TARGETS ${target} EXPORT ${target} 
LIBRARY DESTINATION "${LIB_FOLDER}"
    ARCHIVE DESTINATION "${LIB_FOLDER}"
    RUNTIME DESTINATION "${PLUGIN_FOLDER}"
    INCLUDES DESTINATION "${INCLUDE_FOLDER}")
install(
  EXPORT ${target} 
  DESTINATION ${LIB_FOLDER}
  )
install( DIRECTORY "frontend" DESTINATION "${PLUGIN_FOLDER}")
install(FILES ${HEADER} DESTINATION ${INCLUDE_FOLDER})