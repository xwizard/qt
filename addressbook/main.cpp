#include "listdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ListDialog dialog;
  dialog.show();

  return a.exec();
}
