# Refactored version of example using charts
# Heitor <heitor.adao@gmail.com>

QT += charts

HEADERS += \
    boxdatareader.h \
    mainwindow.h \
    acmesharedeviationchart.h \
    acmeseries.h \
    boxwhiskseries.h

SOURCES += \
    boxdatareader.cpp \
    main.cpp \
    mainwindow.cpp \
    acmesharedeviationchart.cpp \
    acmeseries.cpp \
    boxwhiskseries.cpp

RESOURCES += \
    boxplotdata.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/charts/boxplotchart
INSTALLS += target

FORMS += \
    mainwindow.ui
