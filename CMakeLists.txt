cmake_minimum_required(VERSION 3.21)
project(plugins)
set(CMAKE_CXX_STANDARD 17)
add_library(plugins SHARED library.cpp death_announce.cpp)
include_directories(${PROJECT_SOURCE_DIR}/Header)
add_definitions(-DUNICODE -DNDEBUG -DWIN32_LEAN_AND_MEAN
        -DCPPHTTPLIB_OPENSSL_SUPPORT -D_CRT_SECURE_NO_WARNINGS -D_WINDOWS
        -D_USRDLL -D_AMD64_ -DNOMINMAX)

add_compile_options(
        /permissive /MP /GS /GL /W0 /Gy /Zc:wchar_t /Zi /Gm- /sdl /Zc:inline /fp:precise
        /errorReport:prompt /WX- /Zc:forScope /Gd /Oi /MD /std:c++17 /FC /EHa /nologo
        /diagnostics:column /utf-8
)
add_link_options(
        /MANIFEST /LTCG:incremental /NXCOMPAT /DEBUG /DLL /MACHINE:X64 /OPT:REF /INCREMENTAL:NO /SUBSYSTEM:WINDOWS
        /MANIFESTUAC:NO /OPT:ICF /ERRORREPORT:PROMPT /NOLOGO /DELAYLOAD:"bedrock_server.dll" /TLBID:1
)

link_directories(${PROJECT_SOURCE_DIR}/Lib)
target_link_libraries(plugins
        ${PROJECT_SOURCE_DIR}/Lib/LiteLoader.lib)