#pragma once
#include "CoreMinimal.h"
#include "GbxAction_PhysicalAnim.h"
#include "GbxAction_PhysicalDeath.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_PhysicalDeath : public UGbxAction_PhysicalAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PhysicalAnimationDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool bCapPhysicalAnimationDelayToAnimationDuration;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PrematurePhysicalAnimationIgnoreBodyNames;
    
    UPROPERTY(EditAnywhere)
    bool bAllowPrematurePhysicalAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bTearOffOnDeath;
    
    UPROPERTY(EditAnywhere)
    float MaxRagdollTime;
    
    UGbxAction_PhysicalDeath();
};

