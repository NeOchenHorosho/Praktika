# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/EKR_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/EKR_autogen.dir/ParseCache.txt"
  "EKR_autogen"
  )
endif()
