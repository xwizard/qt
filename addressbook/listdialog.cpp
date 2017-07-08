#include "listdialog.h"
#include "editdialog.h"

ListDialog::ListDialog()
{
  ui.setupUi(this);

  connect(ui.addButton, SIGNAL(clicked()), this, SLOT(addItem()));
  connect(ui.editButton, SIGNAL(clicked()), this, SLOT(editItem()));
  connect(ui.deleteButton, SIGNAL(clicked()), this, SLOT(deleteItem()));
}

void ListDialog::addItem()
{
  EditDialog dialog(this);

  if (dialog.exec() == QDialog::Accepted)
    ui.list->addItem(dialog.name() + " -- " + dialog.number());
}

void ListDialog::deleteItem()
{
  delete ui.list->currentItem();
}

void ListDialog::editItem()
{
  if(!ui.list->currentItem())
    return;

  QStringList parts = ui.list->currentItem()->text().split("--");

  EditDialog dialog(this);
  dialog.setName(parts[0].trimmed());
  dialog.setNumber(parts[1].trimmed());

  if( dialog.exec() == QDialog::Accepted)
    ui.list->currentItem()->setText(dialog.name() + " -- " + dialog.number());
}
