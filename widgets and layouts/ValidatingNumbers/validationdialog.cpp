#include "validationdialog.h"
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QValidator>

ValidationDialog::ValidationDialog(QWidget *parent)
  : QDialog(parent)
{
  QGridLayout *layout = new QGridLayout(this);

  QLineEdit *intEdit = new QLineEdit("42");
  intEdit->setValidator(new QIntValidator());
  QLineEdit *doubleEdit = new QLineEdit("3.14");
  doubleEdit->setValidator(new QDoubleValidator());
  QPushButton *button = new QPushButton("Close");

  layout->addWidget(new QLabel("Integer:"), 0, 0);
  layout->addWidget(intEdit, 0, 1);
  layout->addWidget(new QLabel("Double:"), 1, 0);
  layout->addWidget(doubleEdit, 1, 1);
  layout->addWidget(button, 2, 0, 1, 2);

  connect(button, SIGNAL(clicked()), this, SLOT(accept()));
}

ValidationDialog::~ValidationDialog()
{

}
