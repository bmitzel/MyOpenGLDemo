#ifndef WINDOW_H
#define WINDOW_H

#include <QOpenGLFunctions>
#include <QOpenGLWindow>

class Window : public QOpenGLFunctions, public QOpenGLWindow
{
public:
    Window();
    ~Window();

    void initializeGL() override;
    void resizeGL( int w, int h ) override;
    void paintGL() override;
};

#endif // WINDOW_H
