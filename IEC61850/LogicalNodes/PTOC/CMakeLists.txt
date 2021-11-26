set(project_Name
        PTOC
        )

set(Sources
        PTOC.cpp
        )
set(Headers
        PTOC.h
        )
set(Library

        LN


        ACD
        ACT
        ASG
        ING
        WYE
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

