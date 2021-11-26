set(project_Name
        MSQI
        )

set(Sources
        MSQI.cpp
        )
set(Headers
        MSQI.h
        )
set(Library

        LN

        BaseVector
        Sequence
        WYE
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

