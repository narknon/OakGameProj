#include "LogitechARXConfig.h"

ULogitechARXConfig::ULogitechARXConfig() {
    this->BasePathToAssets = TEXT("..\\..\\..\\OakGame\\Content\\LogitechARX");
    this->IndexFile = TEXT("index.html");
    this->AppletTitle = FText::FromString(TEXT("Borderlands 3"));
    this->AppletFriendlyName = FText::FromString(TEXT("Borderlands 3"));
}

