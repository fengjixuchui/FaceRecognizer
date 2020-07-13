#ifndef CIMAGETOOLOPENCV_H
#define CIMAGETOOLOPENCV_H

#include "ConverFormat.h"

class CConverFormatOpenCV : public CConverFormat
{
    Q_OBJECT
public:
    explicit CConverFormatOpenCV(QObject *parent = nullptr);

    Q_INTERFACES(CConverFormat)
#if (QT_VERSION >= QT_VERSION_CHECK(5, 0, 0))
    Q_PLUGIN_METADATA(IID "KangLinStudio.Rabbit.FaceRecognizer.Plugs.ImageTool.ConverFormat.OpenCV")
#endif

    virtual QImage onConverFormatToRGB888(const QVideoFrame &frame) override;
};

#endif // CIMAGETOOLOPENCV_H
