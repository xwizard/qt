#ifndef VALIDATIONDIALOG_H
#define VALIDATIONDIALOG_H

#include <QDialog>

class ValidationDialog : public QDialog
{
  Q_OBJECT

public:
  ValidationDialog(QWidget *parent = 0);
  ~ValidationDialog();
};

#endif // VALIDATIONDIALOG_H
