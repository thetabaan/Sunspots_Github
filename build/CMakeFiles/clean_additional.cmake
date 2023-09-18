# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/sunspots_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/sunspots_autogen.dir/ParseCache.txt"
  "sunspots_autogen"
  )
endif()
