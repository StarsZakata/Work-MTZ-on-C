set(project_Name
        XCBR
        )

set(Sources
        XCBR.cpp
        )
set(Headers
        XCBR.h
        )
set(Library

        LN


        DPC
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

