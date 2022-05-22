#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OakZoneMapSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class OAKGAME_API UOakZoneMapSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> ZoneMapLists;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath ZoneMapGlobalData;
    
    UPROPERTY(Config, EditAnywhere)
    bool bMiniMapFacePlayerDirection;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowLegendariesOnMiniMap;
    
    UPROPERTY(Config, EditAnywhere)
    float MiniMapPitchAngle;
    
    UPROPERTY(Config, EditAnywhere)
    bool bGenerateFogTexture;
    
public:
    UOakZoneMapSettings();
};

