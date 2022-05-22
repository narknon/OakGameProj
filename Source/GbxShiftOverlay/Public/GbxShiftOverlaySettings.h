#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxShiftOverlaySettings.generated.h"

UCLASS()
class GBXSHIFTOVERLAY_API UGbxShiftOverlaySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 ZOrder;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoBlockOnMapLoad;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoBlockOnMovie;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoBlockOnCinematic;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoBlockOnAppFocus;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NotificationPadding;
    
    UPROPERTY(Config, EditAnywhere)
    float NotificationSizeX;
    
    UPROPERTY(Config, EditAnywhere)
    float NotificationSizeY;
    
    UPROPERTY(Config, EditAnywhere)
    int32 OverlayVirtualResX;
    
    UPROPERTY(Config, EditAnywhere)
    int32 OverlayVirtualResY;
    
    UPROPERTY(Config, EditAnywhere)
    float InputModeThreshold_Cursor;
    
    UPROPERTY(Config, EditAnywhere)
    float InputModeThreshold_Analog;
    
    UGbxShiftOverlaySettings();
};

