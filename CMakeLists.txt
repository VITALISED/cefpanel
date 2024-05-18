cmake_minimum_required(VERSION 3.15)
project(cefpanel LANGUAGES CXX C)

set(PLUGIN_API_SOURCES
    src/interfaces/interface.h
    src/interfaces/interface.c
    src/interfaces/ns_interface.h
    src/interfaces/ns_interface.c
    src/interfaces/engine_interface.h
    src/interfaces/engine_interface.c
    src/interfaces/plugin_callbacks.h
    src/interfaces/plugin_callbacks.c
    src/interfaces/sys.h
    src/interfaces/sys.c
    src/interfaces/cvar.h
    src/interfaces/cvar.c
    src/squirrel/squirrel.h
    src/squirrel/squirrel.c
    src/squirrel/sqvm.h
    src/cvar/cvar.h
    src/cvar/cvar.c
    src/bindings/native_closures.h
    src/bindings/native_closures.c
    src/bindings/module.h
    src/bindings/module.c
    src/bindings/relay.h
    src/bindings/relay.c
    src/bindings/assert.h)

add_library(cefpanel SHARED src/dllmain.cpp ${PLUGIN_API_SOURCES})

target_include_directories(cefpanel PRIVATE ${CMAKE_SOURCE_DIR}/src)

set_target_properties(cefpanel PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED
                                                          YES)
