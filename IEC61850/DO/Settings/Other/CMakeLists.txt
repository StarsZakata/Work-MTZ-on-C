set(DIRS
        APC
        CURVE
        INFO
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(Other INTERFACE )
target_link_libraries(Other INTERFACE ${DIRS})
#####################