set(project_Name
        LN
        )

set(Sources
        LN.cpp
        )
set(Headers
        LN.h
        )
set(Library

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

