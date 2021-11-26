set(project_Name
        CMV
        )

set(Sources
        CMV.cpp
        )
set(Headers
        CMV.h
        )
set(Library

        BaseClass
        BaseVector


        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

