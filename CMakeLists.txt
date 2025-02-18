cmake_minimum_required(VERSION 3.8)

add_library(imgui_gradient)
add_library(imgui_gradient::imgui_gradient ALIAS imgui_gradient)
target_compile_features(imgui_gradient PUBLIC cxx_std_11)

# ---Add source files---
target_include_directories(imgui_gradient PUBLIC include)
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS src/*.cpp)
target_sources(imgui_gradient PRIVATE ${SRC_FILES})

# Maybe enable warnings as errors
set(WARNINGS_AS_ERRORS_FOR_IMGUI_GRADIENT OFF CACHE BOOL "ON iff you want to treat warnings as errors")
if(WARNINGS_AS_ERRORS_FOR_IMGUI_GRADIENT)
    if(MSVC)
        target_compile_options(imgui_gradient PRIVATE /WX)
    else()
        target_compile_options(imgui_gradient PRIVATE -Werror)
    endif()
endif()