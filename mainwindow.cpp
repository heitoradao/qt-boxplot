#include "mainwindow.h"

#include <QtWidgets/QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QBarCategoryAxis>
#include "boxdatareader.h"

#include "acmesharedeviationchart.h"
#include "ui_mainwindow.h"

//QT_CHARTS_USE_NAMESPACE
using namespace QtCharts;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->chartView->setChart(new AcmeShareDeviationChart);
}

MainWindow::~MainWindow()
{
    delete ui;
}
