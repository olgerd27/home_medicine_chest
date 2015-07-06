#ifndef MEDICINE_CARD_FORM_H
#define MEDICINE_CARD_FORM_H

#include <QWidget>

namespace Ui {
class MedicineCardForm;
}

class MedicineCardForm : public QWidget
{
    Q_OBJECT

public:
    explicit MedicineCardForm(QWidget *parent = 0);
    ~MedicineCardForm();

private:
    Ui::MedicineCardForm *ui;
};

#endif // MEDICINE_CARD_FORM_H
