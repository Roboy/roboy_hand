# Install script for directory: /home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_rqt_plugins/msj_platform_rqt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sausy/Projects/Hand_openBionic/software/catkin/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/msj_platform_rqt/catkin_generated/installspace/msj_platform_rqt.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/msj_platform_rqt/cmake" TYPE FILE FILES
    "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/msj_platform_rqt/catkin_generated/installspace/msj_platform_rqtConfig.cmake"
    "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/msj_platform_rqt/catkin_generated/installspace/msj_platform_rqtConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/msj_platform_rqt" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_rqt_plugins/msj_platform_rqt/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/msj_platform_rqt/catkin_generated/safe_execute_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/msj_platform_rqt/catkin_generated/installspace/msj_platform_rqt.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/msj_platform_rqt/cmake" TYPE FILE FILES
    "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/msj_platform_rqt/catkin_generated/installspace/msj_platform_rqtConfig.cmake"
    "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/msj_platform_rqt/catkin_generated/installspace/msj_platform_rqtConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/msj_platform_rqt" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_rqt_plugins/msj_platform_rqt/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmsj_platform_rqt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmsj_platform_rqt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmsj_platform_rqt.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/devel/lib/libmsj_platform_rqt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmsj_platform_rqt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmsj_platform_rqt.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmsj_platform_rqt.so"
         OLD_RPATH "/opt/ros/melodic/lib:/home/sausy/Projects/Hand_openBionic/software/catkin/devel/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmsj_platform_rqt.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/msj_platform_rqt" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_rqt_plugins/msj_platform_rqt/package.xml")
endif()
