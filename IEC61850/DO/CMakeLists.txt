set(DIRS
        Measure
        Settings
        StatusControl
        Totalnform
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(DO INTERFACE)
target_link_libraries(DO INTERFACE ${DIRS})
#####################