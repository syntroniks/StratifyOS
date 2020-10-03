

if(SOS_VERBOSE)
	set(CMAKE_VERBOSE_MAKEFILE 1)
endif()

set(SUFFIX "")

if(SOS_OPTION)
	set(SUFFIX _${SOS_OPTION})
	set(LIB_OPTION_DEFINE __${SOS_OPTION})
elseif()
	set(LIB_OPTION_DEFINE __no_sos_lib_option)
endif()

if(NOT ${SOS_CONFIG} STREQUAL release )
	set(SUFFIX ${SUFFIX}_${SOS_CONFIG})
endif()

set(BUILD_FLAGS ${SOS_BUILD_FLAGS} ${SOS_BUILD_FLOAT_OPTIONS} ${SOS_OPTIMIZATION})

set(BUILD_LIBRARY_INSTALL_NAME ${SOS_NAME}${SUFFIX})
set(BUILD_LIBRARY_TARGET ${BUILD_LIBRARY_INSTALL_NAME}_${SOS_ARCH})

add_library(${BUILD_LIBRARY_TARGET} STATIC ${SOS_SOURCELIST})
target_compile_definitions(${BUILD_LIBRARY_TARGET} PUBLIC ${LIB_OPTION_DEFINE} __${SOS_CONFIG} __${SOS_ARCH} ${SOS_DEFINITIONS} MCU_SOS_GIT_HASH=${SOS_GIT_HASH})
target_compile_options(${BUILD_LIBRARY_TARGET} PUBLIC ${BUILD_FLAGS})
install(FILES ${PROJECT_BINARY_DIR}/lib${BUILD_LIBRARY_TARGET}.a DESTINATION lib/${SOS_BUILD_INSTALL_DIR}/${SOS_BUILD_FLOAT_DIR} RENAME lib${BUILD_LIBRARY_INSTALL_NAME}.a)


if(SOS_INCLUDE_DIRECTORIES)
	target_include_directories(${BUILD_LIBRARY_TARGET} PUBLIC ${SOS_INCLUDE_DIRECTORIES})
endif()

target_include_directories(${BUILD_LIBRARY_TARGET} PUBLIC ${SOS_BUILD_SYSTEM_INCLUDES})
