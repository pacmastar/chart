#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <qlineseries.h>
#include "QtCharts/qlineseries.h"
#include "QtCharts/QChart"

using namespace QtCharts;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Start_clicked()
{

    double a = ui->lineEdit_A->text().toDouble();
    double b = ui->lineEdit_B->text().toDouble();
    double c = ui->lineEdit_C->text().toDouble();
    double from = ui->lineEdit_From->text().toDouble();
    double to = ui->lineEdit_To->text().toDouble();
    double step = ui->lineEdit_Step->text().toDouble();


    qDebug() <<a;
    qDebug() <<b;
    qDebug() <<c;
    qDebug() <<from;
    qDebug() <<to;
    qDebug() <<step;
    QLineSeries *series = new QLineSeries();


    double y;
    for(double x = from; x <= to; x+=step){
        y = x*x;
        series->append(x,y);
//        this->lst.append(QPointF(x,y));

    }
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("simple chart example");
    ui->graphicsView->setChart(chart);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

//    for(int i=0;i<lst.size();++i){
//        qDebug() << lst[i];
//    }
}

