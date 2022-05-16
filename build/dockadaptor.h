/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a dockadaptor -i src/mainwindow.h -l MainWindow /home/tokyo/clone/RebootOS/dock/src/com.matsya.Dock.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DOCKADAPTOR_H
#define DOCKADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "src/mainwindow.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.matsya.Dock
 */
class DockAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.matsya.Dock")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.matsya.Dock\">\n"
"    <method name=\"add\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"desktopFile\"/>\n"
"    </method>\n"
"    <method name=\"remove\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"desktopFile\"/>\n"
"    </method>\n"
"    <method name=\"pinned\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"desktopFile\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"setDirection\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"direction\"/>\n"
"    </method>\n"
"    <method name=\"setIconSize\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"iconSize\"/>\n"
"    </method>\n"
"    <method name=\"setVisibility\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"visibility\"/>\n"
"    </method>\n"
"    <method name=\"setStyle\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"style\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"(iiii)\" name=\"primaryGeometry\">\n"
"      <annotation value=\"QRect\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"i\" name=\"direction\"/>\n"
"    <property access=\"read\" type=\"i\" name=\"visibility\"/>\n"
"    <property access=\"read\" type=\"i\" name=\"style\"/>\n"
"    <signal name=\"primaryGeometryChanged\"/>\n"
"    <signal name=\"directionChanged\"/>\n"
"    <signal name=\"visibilityChanged\"/>\n"
"    <signal name=\"styleChanged\"/>\n"
"  </interface>\n"
        "")
public:
    DockAdaptor(MainWindow *parent);
    virtual ~DockAdaptor();

    inline MainWindow *parent() const
    { return static_cast<MainWindow *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(int direction READ direction)
    int direction() const;

    Q_PROPERTY(QRect primaryGeometry READ primaryGeometry)
    QRect primaryGeometry() const;

    Q_PROPERTY(int style READ style)
    int style() const;

    Q_PROPERTY(int visibility READ visibility)
    int visibility() const;

public Q_SLOTS: // METHODS
    void add(const QString &desktopFile);
    bool pinned(const QString &desktopFile);
    void remove(const QString &desktopFile);
    void setDirection(int direction);
    void setIconSize(int iconSize);
    void setStyle(int style);
    void setVisibility(int visibility);
Q_SIGNALS: // SIGNALS
    void directionChanged();
    void primaryGeometryChanged();
    void styleChanged();
    void visibilityChanged();
};

#endif
