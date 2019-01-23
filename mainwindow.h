#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtCore/QTimer>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QList<QPointF> lst;
private slots:
    void on_pushButton_Start_clicked();

private:
    Ui::MainWindow *ui;
    QTimer timer;
};

#endif // MAINWINDOW_H
