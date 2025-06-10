#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "wsg_50_driver::wsg_50_driver" for configuration ""
set_property(TARGET wsg_50_driver::wsg_50_driver APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(wsg_50_driver::wsg_50_driver PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C;CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libwsg_50_driver.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS wsg_50_driver::wsg_50_driver )
list(APPEND _IMPORT_CHECK_FILES_FOR_wsg_50_driver::wsg_50_driver "${_IMPORT_PREFIX}/lib/libwsg_50_driver.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
