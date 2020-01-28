# Install script for directory: /home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_plexus/catkin_generated/installspace/roboy_plexus.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roboy_plexus/cmake" TYPE FILE FILES
    "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_plexus/catkin_generated/installspace/roboy_plexusConfig.cmake"
    "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_plexus/catkin_generated/installspace/roboy_plexusConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roboy_plexus" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/roboy_plexus" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/roboy_plexus")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/roboy_plexus"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus" TYPE EXECUTABLE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/devel/lib/roboy_plexus/roboy_plexus")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/roboy_plexus" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/roboy_plexus")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/roboy_plexus"
         OLD_RPATH "/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/opt/ros/kinetic/lib:/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/usr/lib/arm-linux-gnueabihf:/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/usr/lib:/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/lib/arm-linux-gnueabihf:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/roboy_plexus")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/automaticRoboyPlexusLauncher" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/automaticRoboyPlexusLauncher")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/automaticRoboyPlexusLauncher"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus" TYPE EXECUTABLE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/devel/lib/roboy_plexus/automaticRoboyPlexusLauncher")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/automaticRoboyPlexusLauncher" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/automaticRoboyPlexusLauncher")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/automaticRoboyPlexusLauncher"
         OLD_RPATH "/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/opt/ros/kinetic/lib:/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/usr/lib/arm-linux-gnueabihf:/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/usr/lib:/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/arm/lib/arm-linux-gnueabihf:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/roboy_plexus/automaticRoboyPlexusLauncher")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roboy_plexus" TYPE FILE FILES "/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_plexus/package.xml")
endif()

