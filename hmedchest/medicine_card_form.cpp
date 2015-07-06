#include <QDebug>
#include "medicine_card_form.h"
#include "ui_medicine_card_form.h"

MedicineCardForm::MedicineCardForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MedicineCardForm)
{
    ui->setupUi(this);
}

MedicineCardForm::~MedicineCardForm()
{
    delete ui;
}
