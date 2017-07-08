#ifndef LISTDIALOG_H
#define LISTDIALOG_H

#include <QDialog>
#include <QWidget>
#include "ui_listdialog.h"

class ListDialog : public QDialog
{
  Q_OBJECT

public:
  ListDialog();

private slots:
  void addItem();
  void editItem();
  void deleteItem();

private:
  Ui::ListDialog ui;
};

#endif // LISTDIALOG_H
