#include "queries_form.h"
#include "ui_queries_form.h"

QueriesForm::QueriesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueriesForm)
{
    ui->setupUi(this);
}

QueriesForm::~QueriesForm()
{
    delete ui;
}
