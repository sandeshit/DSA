#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QStackedLayout>
#include "addwindow.h"
#include "search.h"
#include "login.h"
#include "bst.h"

//extern BST bigdata;

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();
    //Layout layout();

private slots:
    void on_addbutton_clicked();

    void on_searchbutton_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
