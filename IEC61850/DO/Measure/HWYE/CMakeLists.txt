set(project_Name
        HWYE
        )

set(Sources
        HWYE.cpp
        )
set(Headers
        HWYE.h
        )
set(Library

        BaseClass
        BaseVector


        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

