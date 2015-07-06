#ifndef QUERY_FORM_H
#define QUERY_FORM_H

#include <QWidget>

namespace Ui {
class QueryForm;
}

class QueryForm : public QWidget
{
    Q_OBJECT

public:
    explicit QueryForm(QWidget *parent = 0);
    ~QueryForm();

private:
    Ui::QueryForm *ui;
};

#endif // QUERY_FORM_H
