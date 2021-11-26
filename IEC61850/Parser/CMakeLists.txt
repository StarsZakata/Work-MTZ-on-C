set(DIRS
        MySVSB
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(Parser INTERFACE )
target_link_libraries(Parser INTERFACE ${DIRS})
#####################