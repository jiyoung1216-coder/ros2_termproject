#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ramen_interfaces::ramen_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET ramen_interfaces::ramen_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ramen_interfaces::ramen_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libramen_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libramen_interfaces__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ramen_interfaces::ramen_interfaces__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_ramen_interfaces::ramen_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libramen_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
