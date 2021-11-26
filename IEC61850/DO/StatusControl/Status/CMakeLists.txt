set(DIRS
        BCR
        DPS
        INS
        SEC
        SPS
        ACD
        ACT
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(Status INTERFACE)
target_link_libraries(Status INTERFACE ${DIRS})
#####################