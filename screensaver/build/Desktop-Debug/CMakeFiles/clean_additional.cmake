# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/screensaver_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/screensaver_autogen.dir/ParseCache.txt"
  "screensaver_autogen"
  )
endif()
