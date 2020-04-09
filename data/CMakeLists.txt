
add_definitions(-D_BUILDING_HERP_FRONTEND_INTERFACE)
file(GLOB SRCl
    "*.cpp"
)
file(GLOB HEADERl
    "*.h"
    "*.hpp"
)
set(SRC ${SRC} ${SRCl} PARENT_SCOPE)
set(HEADER ${HEADER} ${HEADERl} PARENT_SCOPE)