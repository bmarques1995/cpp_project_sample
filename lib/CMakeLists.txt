# CMakeList.txt: projeto de CMake para cpp_project_sample, incluir origem e definir
# lógica específica a um projeto aqui.
#

# Adicione a origem ao executável deste projeto.
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

file(GLOB_RECURSE SAMPLE_HDRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./include/*.hpp")
file(GLOB_RECURSE SAMPLE_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./lib/*.cpp")

add_library (sample_lib SHARED ${SAMPLE_HDRS} ${SAMPLE_SRCS})
target_include_directories(sample_lib PRIVATE "./include")

set_target_properties(sample_lib PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sample_lib PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
