#include <QKeyEvent>
#include <QWidget>
#include <QDebug>

//#include <curses.h>

namespace quantum_engine {
    namespace Event {
        class KeyPress : public QWidget { 
            Q_OBJECT
            public:
                explicit KeyPress(QWidget * parent = 0) : QWidget(parent) {} 
            protected:
                void keyPressEvent( QKeyEvent * event ) override {
                    qInfo() << "Keypress";
                }
        };
    }
}