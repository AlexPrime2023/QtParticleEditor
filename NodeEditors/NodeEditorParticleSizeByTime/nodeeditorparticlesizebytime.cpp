#include "nodeeditorparticlesizebytime.h"

#include <QPushButton>
#include <QPalette>

NodeEditorParticleSizeByTime::NodeEditorParticleSizeByTime(QWidget *parent) :
    NodeEditor(parent)
{
    m_openCurveEditor = new QPushButton("Curve Editor");
    addItem(QString("Curve Editor:"), m_openCurveEditor);
}

void NodeEditorParticleSizeByTime::resetEditor()
{
}

QJsonObject NodeEditorParticleSizeByTime::serialize() const
{
    return QJsonObject();
}

void NodeEditorParticleSizeByTime::deserialize(const QJsonObject& object)
{
}
