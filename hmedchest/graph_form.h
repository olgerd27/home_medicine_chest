#ifndef GRAPH_FORM_H
#define GRAPH_FORM_H

#include <QWidget>

namespace Ui {
class GraphForm;
}

class GraphForm : public QWidget
{
    Q_OBJECT

public:
    explicit GraphForm(QWidget *parent = 0);
    ~GraphForm();

private:
    Ui::GraphForm *ui;
};

#endif // GRAPH_FORM_H
