set(project_Name
        SAV
        )

set(Sources
        SAV.cpp
        )
set(Headers
        SAV.h
        )
set(Library

        BaseClass
        BaseType

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

