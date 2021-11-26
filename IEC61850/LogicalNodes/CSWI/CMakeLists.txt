set(project_Name
        CSWI
        )

set(Sources
        CSWI.cpp
        )
set(Headers
        CSWI.h
        )
set(Library
        LN
        DPC
        ACT
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

