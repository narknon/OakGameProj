#include "CohtmlSettings.h"

UCohtmlSettings::UCohtmlSettings() {
    this->EnableLiveReload = false;
    this->DevToolsPort = 9444;
    this->EnableLocalization = false;
    this->EnableBreakIterator = false;
    this->HandleInputOnHTMLBody = false;
    this->InputTransparentCssClasses.AddDefaulted(1);
    this->ScrollDelta = 40.00f;
    this->ShowWarningsOnScreen = true;
    this->LogSeverity = ECohtmlSettingsSeverity::Info;
    this->bRespectTitleSafeZone = true;
    this->bRespectLetterboxing = true;
    this->TickWhileGameIsPaused = false;
    this->bUseLowerCaseNamesForAutoExposedProperties = false;
    this->MSAA = ECohtmlMSAA::MSAA_1x;
    this->bUseInputPreprocessor = false;
}

