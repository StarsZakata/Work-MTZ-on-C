set(project_Name
        DEL
        )

set(Sources
        DEL.cpp
        )
set(Headers
        DEL.h
        )
set(Library

        BaseClass
        BaseVector
        CMV

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

