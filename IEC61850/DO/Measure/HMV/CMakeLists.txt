set(project_Name
        HMV
        )

set(Sources
        HMV.cpp
        )
set(Headers
        HMV.h
        )
set(Library

        BaseClass
        BaseVector


        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

