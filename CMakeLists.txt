cmake_minimum_required(VERSION 3.10)
project(untitled)  # This must match your folder name or CLion project name

set(CMAKE_CXX_STANDARD 17)

# Path to raylib
set(RAYLIB_ROOT "C:/Users/Administrator/Desktop/raylib-5.5_win64_mingw-w64")

# Dodaj raylib include
include_directories(${RAYLIB_ROOT}/include)

# ✅ Dodaj i tvoj include folder
include_directories(${CMAKE_SOURCE_DIR}/include)

# Svi fajlovi projekta
add_executable(untitled
        main.cpp
        src/map.cpp
        src/textures.cpp
)

# Linkovanje sa raylib
target_link_libraries(untitled
        ${RAYLIB_ROOT}/lib/libraylib.a
        opengl32
        gdi32
        winmm
        shell32
)
