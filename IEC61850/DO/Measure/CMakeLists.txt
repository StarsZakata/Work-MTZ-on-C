set(DIRS
        CMV
        DEL
        HDEL
        HMV
        HWYE
        SAV
        Sequence
        MV
        WYE
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(Measure INTERFACE)
target_link_libraries(Measure INTERFACE ${DIRS})
#####################