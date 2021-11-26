set(DIRS
        ASG
        ING
        Other
        SPG
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(Settings INTERFACE)
target_link_libraries(Settings INTERFACE ${DIRS})
#####################