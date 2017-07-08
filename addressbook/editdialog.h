#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QString>
#include <QDialog>
#include "ui_editdialog.h"

class EditDialog : public QDialog
{

public:
  EditDialog(QWidget *parent = 0);
  const QString name() const;
  void setName(const QString &name);

  const QString number() const;
  void setNumber(const QString &number);

private:
  Ui::EditDialog ui;
};

#endif // EDITDIALOG_H
