
project(
 baz 
  VERSION 0.1.1
  DESCRIPTION "baz Library"
  LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include(GNUInstallDirs)
file(RELATIVE_PATH relDir ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}
     ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_INSTALL_RPATH $ORIGIN $ORIGIN/${relDir})

add_library(baz)
target_compile_features(baz PUBLIC cxx_std_14)
target_include_directories(
  baz PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(baz PROPERTIES VERSION ${PROJECT_VERSION}
                                     SOVERSION ${PROJECT_VERSION_MAJOR})

target_sources(baz PRIVATE baz.cpp)
