#include "query_form.h"
#include "ui_query_form.h"

QueryForm::QueryForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueryForm)
{
    ui->setupUi(this);
}

QueryForm::~QueryForm()
{
    delete ui;
}
