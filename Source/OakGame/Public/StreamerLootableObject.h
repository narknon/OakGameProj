#pragma once
#include "CoreMinimal.h"
#include "LootableObject.h"
#include "StreamerLootableObject.generated.h"

class AOakPlayerController;
class UInWorldIconData;
class UOakMissionIconComponent;

UCLASS()
class AStreamerLootableObject : public ALootableObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FString FirstDonor;
    
    UPROPERTY(Transient)
    FString LargestDonor;
    
    UPROPERTY(Transient)
    int32 LargestDonationAmount;
    
    UPROPERTY(Export, Transient)
    UOakMissionIconComponent* ChestWaypoint;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 DonationTier;
    
    UPROPERTY(EditAnywhere)
    UInWorldIconData* ChestWorldIconData;
    
    UPROPERTY(EditAnywhere)
    float ChestWaypointVerticalOffset;
    
    AStreamerLootableObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerShowEffectSlideout(AOakPlayerController* OakPC);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowEffectSlideout(AOakPlayerController* OakPC);
    
};

