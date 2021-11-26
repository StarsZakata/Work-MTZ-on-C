set(DIRS
        CSWI
        BaseFuria
        LN
        MMXU
        MSQI
        PTOC
        XCBR
        RDIR
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(LogicalNodes INTERFACE)
target_link_libraries(LogicalNodes INTERFACE ${DIRS})
#####################