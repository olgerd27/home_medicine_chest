#ifndef MEDICINE_CARDS_FORM_H
#define MEDICINE_CARDS_FORM_H

#include <QWidget>

namespace Ui {
class MedicineCardsForm;
}

class MedicineCardsForm : public QWidget
{
    Q_OBJECT

public:
    explicit MedicineCardsForm(QWidget *parent = 0);
    ~MedicineCardsForm();

private:
    Ui::MedicineCardsForm *ui;
};

#endif // MEDICINE_CARDS_FORM_H
