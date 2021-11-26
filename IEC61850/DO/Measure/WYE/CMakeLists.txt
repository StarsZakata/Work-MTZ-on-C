set(project_Name
        WYE
        )

set(Sources
        WYE.cpp
        )
set(Headers
        WYE.h
        )
set(Library

        CMV
        BaseClass

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

