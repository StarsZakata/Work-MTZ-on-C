set(project_Name
        HDEL
        )

set(Sources
        HDEL.cpp
        )
set(Headers
        HDEL.h
        )
set(Library

        BaseClass
        BaseVector


        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

