set(DIRS
        Status
        Control
         )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(StatusControl INTERFACE)
target_link_libraries(StatusControl INTERFACE ${DIRS})
#####################