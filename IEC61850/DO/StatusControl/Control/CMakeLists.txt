set(DIRS
        BSC
        DPC
        INC
        ISC
        SPC
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(Control INTERFACE)
target_link_libraries(Control INTERFACE ${DIRS})
#####################