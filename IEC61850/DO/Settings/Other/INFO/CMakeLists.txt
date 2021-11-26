set(DIRS
        CSD
        DPL
        LPL
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(INFO INTERFACE )
target_link_libraries(INFO INTERFACE ${DIRS})
#####################