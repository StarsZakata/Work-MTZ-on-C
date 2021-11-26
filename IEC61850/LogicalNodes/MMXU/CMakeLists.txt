set(project_Name
        MMXU
        )

set(Sources
        MMXU.cpp
        )
set(Headers
        MMXU.h
        )
set(Library
        LN
        MV
        WYE
        SAV
        DEL
        BaseFuria
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC ./)
target_link_libraries(${project_Name} PUBLIC ${Library})

