#pragma once
#include "CoreMinimal.h"
#include "GbxSignificanceEventData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GbxSignificanceSettings.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxSignificanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TMap<FName, FGbxSignificanceEventData> Events;
    
    UGbxSignificanceSettings();
    UFUNCTION()
    static void EnumerateSignificanceEvents(TArray<FName>& OutEvents);
    
};

