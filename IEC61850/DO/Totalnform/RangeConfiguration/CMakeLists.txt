set(project_Name
        RangeConfiguration
        )

set(Sources
        RangeConfiguration.cpp
        )
set(Headers
        RangeConfiguration.h
        )
set(Library
        BaseClass
        BaseType
        AnalogValue
        )

add_library(${project_Name} STATIC ${Sources} ${Headers})
target_include_directories(${project_Name} PUBLIC .)
target_link_libraries(${project_Name} PUBLIC ${Library})

