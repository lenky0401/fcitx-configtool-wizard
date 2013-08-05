project(fcitx-configtool-wizard)

cmake_minimum_required(VERSION 2.8.6)

find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR} 
    ${CMAKE_CURRENT_SOURCE_DIR})

set(fcitx-configtool-wizard_SRCS main.cpp mainwizard.cpp intropage.cpp)

add_executable(fcitx-configtool-wizard ${fcitx-configtool-wizard_SRCS} 
    ${fcitx-configtool-wizard_RCC_SRCS})

set_target_properties(fcitx-configtool-wizard PROPERTIES AUTOMOC TRUE)
target_link_libraries(fcitx-configtool-wizard ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} 
    ${QT_QTDBUS_LIBRARY} ${QT_QTDECLARATIVE_LIBRARY})
install(TARGETS fcitx-configtool-wizard RUNTIME DESTINATION bin)
