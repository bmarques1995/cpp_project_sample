# CMakeList.txt: projeto de CMake para cpp_project_sample, incluir origem e definir
# lógica específica a um projeto aqui.
#

option(WINDOWED_PROJECT OFF)

set(EXEC_WINDOWED_ARG)

if(WIN32 AND WINDOWED_PROJECT)
	set(EXEC_WINDOWED_ARG WIN32)
endif()

file(GLOB_RECURSE SAMPLE_HDRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./include/*.hpp")
file(GLOB_RECURSE SAMPLE_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./lib/*.cpp")

# Adicione a origem ao executável deste projeto.
add_executable (sample_exec ${EXEC_WINDOWED_ARG} ${SAMPLE_HDRS} ${SAMPLE_SRCS})
target_include_directories(sample_exec PRIVATE "./include" "${PROJECT_SOURCE_DIR}/lib/include")
target_link_libraries(sample_exec PRIVATE sample_lib)

set_target_properties(sample_exec PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sample_exec PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
