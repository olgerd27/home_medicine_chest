#ifndef QUERIES_FORM_H
#define QUERIES_FORM_H

#include <QWidget>

namespace Ui {
class QueriesForm;
}

class QueriesForm : public QWidget
{
    Q_OBJECT

public:
    explicit QueriesForm(QWidget *parent = 0);
    ~QueriesForm();

private:
    Ui::QueriesForm *ui;
};

#endif // QUERIES_FORM_H
