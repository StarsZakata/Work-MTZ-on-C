set(DIRS
        BaseClass
        BaseType
        BaseVector
        DO
        LogicalNodes
        Parser
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(IEC61850 INTERFACE )
target_link_libraries(IEC61850 INTERFACE ${DIRS})
#####################