QT       += \
    core gui \
    multimediawidgets \
    charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../M3706C/MyCRC.cpp \
    ../M3706C/SensorClient.cpp \
    ../PLC/ModbusTCP.cpp \
    ../Robot/RobotCtrl.cpp \
    addpoint.cpp \
    camerathread.cpp \
    connectsettings.cpp \
    forceget.cpp \
    hikvisonsdk.cpp \
    losscaculation.cpp \
    main.cpp \
    mainwindow.cpp \
    mvcameras.cpp \
    orientationdialog.cpp \
    quickchangecontrol.cpp \
    sensor.cpp \
    variables.cpp

HEADERS += \
    ../M3706C/MyCRC.h \
    ../M3706C/SensorClient.h \
    ../PLC/ModbusTCP.h \
    ../Robot/RobotCtrl.h \
    addpoint.h \
    camerathread.h \
    connectsettings.h \
    forceget.h \
    hikvisonsdk.h \
    losscaculation.h \
    mainwindow.h \
    mvcameras.h \
    orientationdialog.h \
    quickchangecontrol.h \
    sensor.h \
    variables.h

FORMS += \
    addpoint.ui \
    connectsettings.ui \
    forceget.ui \
    losscaculation.ui \
    mainwindow.ui \
    orientationdialog.ui \
    quickchangecontrol.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/resources.qrc

DISTFILES += \
    ../M3706C/log.txt \
    ../PLC/DMT.dll \
    ../PLC/DMT.lib


LIBS += -L$$PWD/../libs/ -lDMT \
        -L$$PWD/../HK/Libraries/win64/ -lMvCameraControl

INCLUDEPATH += $$PWD/../libs \
               $$PWD/../opencv/include \
               $$PWD/../HK/Includes


CONFIG(release, debug|release): LIBS += -L$$PWD/../opencv/lib/ -lopencv_world451
else:CONFIG(debug, debug|release): LIBS += -L$$PWD/../opencv/lib/ -lopencv_world451d
else:LIBS += -L$$PWD/../opencv/lib/ -lopencv_world451

INCLUDEPATH += $$PWD/../opencv/include
