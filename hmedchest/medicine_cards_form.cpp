#include <QDebug>
#include "medicine_cards_form.h"
#include "ui_medicine_cards_form.h"

MedicineCardsForm::MedicineCardsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MedicineCardsForm)
{
    ui->setupUi(this);
}

MedicineCardsForm::~MedicineCardsForm()
{
    delete ui;
}
