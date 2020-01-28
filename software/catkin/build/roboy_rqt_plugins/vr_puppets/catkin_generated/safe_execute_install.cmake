execute_process(COMMAND "/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/vr_puppets/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/sausy/Projects/Hand_openBionic/software/catkin/build/roboy_rqt_plugins/vr_puppets/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
