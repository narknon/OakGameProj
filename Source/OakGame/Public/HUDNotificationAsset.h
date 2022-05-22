#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "HUDNotificationAsset.generated.h"

class UGFxDisplayedNotificationWidget;

UCLASS()
class UHUDNotificationAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxDisplayedNotificationWidget> GFxWidgetToDisplay;
    
    UPROPERTY(EditAnywhere)
    FString IconFrame;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultPriority;
    
    UPROPERTY(EditAnywhere)
    bool bShouldInterrupt;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptible;
    
    UPROPERTY(EditAnywhere)
    float MinimumDisplayTime;
    
    UPROPERTY(EditAnywhere)
    float DesiredDisplayTime;
    
    UPROPERTY(EditAnywhere)
    float TimeoutTime;
    
    UPROPERTY(EditAnywhere)
    bool bStackable;
    
    UPROPERTY(EditAnywhere)
    FName SpawnAudioOverride;
    
    UPROPERTY(EditAnywhere)
    FName DespawnAudioOverride;
    
    UHUDNotificationAsset();
};

