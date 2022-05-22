#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxLevelStreamingBase -FallbackName=GbxLevelStreamingBase
#include "OakLevelStreaming.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UOakLevelStreaming : public UGbxLevelStreamingBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 MapNameEnumIdx;
    
    UPROPERTY(EditAnywhere)
    uint8 ZoneNameEnumIdx;
    
private:
    UPROPERTY(Transient)
    TArray<uint8> MapIndexesForCurrentZone;
    
public:
    UOakLevelStreaming();
private:
    UFUNCTION()
    void OnLevelLoadedChanged();
    
};

