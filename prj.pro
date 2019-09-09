QMAKE_CXXFLAGS += -std=gnu++0x
QT       += gui sql printsupport
QT       += core declarative
QT       += qml

CONFIG   += console

TEMPLATE = app

OTHER_FILES += \
    prj.pro.user \
    .gitignore

HEADERS += \
    SHARED_EXPORT.h \
    IVector.h \
    ISolver.h \
    ISet.h \
    IProblem.h \
    ILog.h \
    ICompact.h \
    IBrocker.h \
    error.h \
    ui_sqlconnectiondialog.h \
    ui_qplot.h \
    ui_dialog.h \
    sqlconnectiondialog.h \
    qplot.h \
    qcustomplot.h \
    controller.h \
    paramsdialog.h

SOURCES += \
    main.cpp \
    sqlconnectiondialog.cpp \
    qplot.cpp \
    qcustomplot.cpp \
    controller.cpp \
    paramsdialog.cpp


LIBS += C:/Qt/qtcreator-2.3.1/ICompactImpl-build-desktop-Qt_4_7_4__4_7_4_________/debug/ICompactImpl.dll

LIBS += D:/optimization-solver-develop/dll/ILog.dll
LIBS += C:/Qt/qtcreator-2.3.1/IVectorImpl-build-desktop-Qt_4_7_4__4_7_4_________/debug/IVectorImpl.dll
LIBS += C:/Qt/qtcreator-2.3.1/ISetImpl-build-desktop-Qt_4_7_4__4_7_4_________/debug/ISetImpl.dll


FORMS += \
    sqlconnectiondialog.ui \
    qplot.ui \
    qdrawplot.ui \
    controller.ui \
    paramsdialog.ui


































