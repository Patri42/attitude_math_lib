cmake_minimum_required(VERSION 3.5)

project(AML_test)

add_executable(${PROJECT_NAME}
    main.cpp    
    )

target_link_libraries(
    ${PROJECT_NAME}
    AML   
)

instal(TARGETS ${PROJECT_NAME}
    DESTINATION ${CMAKE_BINARY_DIR}/bin
)