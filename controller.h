#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QWidget>
#include <QDebug>
#include "ui_controller.h"
#include "list"
#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include "IProblem.h"
#include "ISolver.h"
#include "IBrocker.h"

QT_FORWARD_DECLARE_CLASS(QSqlError)
QT_FORWARD_DECLARE_CLASS(QSqlRecord)

namespace Ui {
    class Controller;
}

class Controller : public QWidget
{
    Q_OBJECT

public:
    explicit Controller(QWidget *parent = 0);
    ~Controller();

    QSqlError changeConnection(const QString &driver, const QString &dbName, const QString &host,
                                   const QString &user, const QString &passwd, int port = -1);

public slots:
    void changeConnection();
    void currentChanged() { updateActions(); }

private slots:

    void on_SolveButton_clicked();

    void on_DrawButton_clicked();

    void on_action_Insert_Row_triggered();

    void on_action_Delete_Row_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_browseButton_clicked();

    void on_Controller_destroyed();

    void on_SolveButton_released();

signals:
    void statusMessage(const QString &message);

protected:
    virtual void closeEvent(QCloseEvent *event);

private:
    void insertRow();
    void deleteRow();
    void updateActions();
    bool select();
    bool checkTableModel(QSqlRecord record);
    bool loadBrocker(IBrocker::Type type, const QString &path);

    Ui::Controller *ui;
    QList<QWidget*> *windows;
    typedef IBrocker * (*GetBrockerFunc)();

    IProblem *m_problem;
    ISolver  *m_solver;

    IBrocker *m_problem_brocker;
    IBrocker *m_solver_brocker;
    QSqlDatabase m_db;
};

#endif // CONTROLLER_H
