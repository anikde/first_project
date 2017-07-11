cmake_minimum_required (VERSION 2.6)
project ( Using_External_Libraries)


add_executable(
	anything
	source.cpp
	myMath.h
	)
	
add_library(myMath STATIC IMPORTED) # or STATIC instead of SHARED
set_target_properties(myMath PROPERTIES
  IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/libmyLib.a"
)
	
target_link_libraries(
	anything
	myMath
	)
