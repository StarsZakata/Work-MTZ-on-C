set(project_Name
        ISC
        )

set(Sources
        ISC.cpp
        )
set(Headers
        ISC.h
        )
set(Library
        BaseClass
        BaseType

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

