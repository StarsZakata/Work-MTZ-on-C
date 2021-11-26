set(project_Name
        AnalogValue
        )

set(Sources
        AnalogValue.cpp
        )
set(Headers
        AnalogValue.h
        )
set(Library
        BaseClass
        BaseType

        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC .)
target_link_libraries(${project_Name} PUBLIC ${Library})

