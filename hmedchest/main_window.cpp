#include "main_window.h"
#include "ui_main_window.h"
#include "medicine_card_form.h"
#include "query_form.h"
#include "graph_form.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->m_stackForms->addWidget(new MedicineCardForm(ui->m_stackForms));
    ui->m_stackForms->addWidget(new QueryForm(ui->m_stackForms));
    ui->m_stackForms->addWidget(new GraphForm(ui->m_stackForms));

    connect(ui->m_listFormsChoice, SIGNAL(currentRowChanged(int)), ui->m_stackForms, SLOT(setCurrentIndex(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
