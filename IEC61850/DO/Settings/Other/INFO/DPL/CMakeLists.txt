set(project_Name
        DPL
        )

set(Sources
        DPL.cpp
        )
set(Headers
        DPL.h
        )
set(Library
        BaseClass
        BaseType
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

