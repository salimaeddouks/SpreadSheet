#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

namespace Ui {
class findDialog;
}

class findDialog : public QDialog
{
    Q_OBJECT

public:
    explicit findDialog(QWidget *parent = nullptr);
    ~findDialog();
    QString getCell()const;//getter pour le text du lineEdit


private:
    Ui::findDialog *ui;
};

#endif // FINDDIALOG_H
