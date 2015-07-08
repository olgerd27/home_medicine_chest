#include "charts_form.h"
#include "ui_charts_form.h"

ChartsForm::ChartsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChartsForm)
{
    ui->setupUi(this);
}

ChartsForm::~ChartsForm()
{
    delete ui;
}
