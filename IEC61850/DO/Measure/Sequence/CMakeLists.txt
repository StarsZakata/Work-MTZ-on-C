set(project_Name
        Sequence
        )

set(Sources
        SEQ.cpp
        )
set(Headers
        SEQ.h
        )
set(Library

        BaseClass
        CMV

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

