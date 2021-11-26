set(DIRS
        AnalogValue
        CtIModels
        Originator
        Point
        PulseConfiguration
        Quality
        RangeConfiguration
        SboClasse
        Unit
        ValWithTrans
        )

foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#####################
add_library(Totalnform INTERFACE )
target_link_libraries(Totalnform INTERFACE ${DIRS})
#####################