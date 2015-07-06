#include "graph_form.h"
#include "ui_graph_form.h"

GraphForm::GraphForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphForm)
{
    ui->setupUi(this);
}

GraphForm::~GraphForm()
{
    delete ui;
}
