# add_executable (foo ${SOURCE_FILES})
# add_library (my_library STATIC|SHARED|MODULE ${SOURCE_FILES})
# add_subdirectory (Demo)

set (SOURCE_FILES  libhersh.c)
add_library (hersh  ${SOURCE_FILES})
