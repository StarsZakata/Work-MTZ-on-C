set(project_Name
        BaseFuria
        )

set(Sources
        Furia.cpp
        )
set(Headers
        Furia.h
        )
set(Library
        BaseVector
        BaseType
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

