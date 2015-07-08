#ifndef CHARTS_FORM_H
#define CHARTS_FORM_H

#include <QWidget>

namespace Ui {
class ChartsForm;
}

class ChartsForm : public QWidget
{
    Q_OBJECT

public:
    explicit ChartsForm(QWidget *parent = 0);
    ~ChartsForm();

private:
    Ui::ChartsForm *ui;
};

#endif // CHARTS_FORM_H
