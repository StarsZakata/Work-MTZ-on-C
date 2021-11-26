set(project_Name
        RDIR
        )

set(Sources
        RDIR.cpp
        )
set(Headers
        RDIR.h
        )
set(Library

        LN

        WYE
        ACD

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

