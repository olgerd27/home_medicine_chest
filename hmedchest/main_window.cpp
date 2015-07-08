#include "main_window.h"
#include "ui_main_window.h"
#include "medicine_cards_form.h"
#include "queries_form.h"
#include "charts_form.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->m_stackForms->addWidget(new MedicineCardsForm(ui->m_stackForms));
    ui->m_stackForms->addWidget(new QueriesForm(ui->m_stackForms));
    ui->m_stackForms->addWidget(new ChartsForm(ui->m_stackForms));

    connect(ui->m_listFormsChoice, SIGNAL(currentRowChanged(int)), ui->m_stackForms, SLOT(setCurrentIndex(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
