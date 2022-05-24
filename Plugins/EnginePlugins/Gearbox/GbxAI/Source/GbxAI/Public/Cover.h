#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "CoverAdjustParams.h"
#include "Cover.generated.h"

class UCoverSlotData;
class UCoverSlotComponent;

UCLASS(DefaultConfig, Config=Game)
class GBXAI_API ACover : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultCoverSlotName;
    
private:
    UPROPERTY(EditAnywhere)
    UCoverSlotData* SlotType;
    
    UPROPERTY(EditAnywhere)
    float SlotInterval;
    
    UPROPERTY(EditAnywhere)
    float TotalWidth;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bSlotsAlwaysVisible;
    
    UPROPERTY(EditAnywhere)
    bool bDrawLineOfSight;
    
    UPROPERTY(EditAnywhere)
    bool bDrawAreas;
    
    UPROPERTY(EditAnywhere)
    bool bDrawInvalidViews;
    
    UPROPERTY(EditAnywhere)
    bool bDrawLocationTests;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UCoverSlotComponent*> Slots;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAutoAdjust;
    
    UPROPERTY(EditAnywhere)
    FCoverAdjustParams AutoAdjustParamsOverride;
    
    UPROPERTY(EditAnywhere)
    AActor* TargetTestActor;
    
    UPROPERTY(EditAnywhere)
    AActor* HostileTestActor;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bAutoAdjust;
    
public:
    ACover();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

