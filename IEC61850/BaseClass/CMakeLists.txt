set(project_Name
        BaseClass
        )

set(Sources
        DATA.cpp
        )
set(Headers
        DATA.h
        )
set(Library
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

