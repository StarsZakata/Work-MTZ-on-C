set(project_Name
        MySVSB
        )

set(Sources
        MySVSB.cpp
        )
set(Headers
        MySVSB.h
        )
set(Library

        LN
        SAV

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC .)
target_link_libraries(${project_Name} PUBLIC ${Library})

