set(project_Name
        BaseType
        )

set(Sources
        BaseType.cpp
        )
set(Headers
        BaseType.h
        )
set(Library
        BaseClass
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

