#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/sausy/Projects/Hand_openBionic/catkin/src/roboy_control_center"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/sausy/Projects/Hand_openBionic/catkin/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/sausy/Projects/Hand_openBionic/catkin/install/lib/python2.7/dist-packages:/home/sausy/Projects/Hand_openBionic/catkin/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/sausy/Projects/Hand_openBionic/catkin/build" \
    "/usr/bin/python2" \
    "/home/sausy/Projects/Hand_openBionic/catkin/src/roboy_control_center/setup.py" \
    build --build-base "/home/sausy/Projects/Hand_openBionic/catkin/build/roboy_control_center" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/sausy/Projects/Hand_openBionic/catkin/install" --install-scripts="/home/sausy/Projects/Hand_openBionic/catkin/install/bin"
