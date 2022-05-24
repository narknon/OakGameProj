#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "Components/PrimitiveComponent.h"
#include "SmartObjectInterface.h"
#include "SmartObjectUseRequest.h"
#include "PerchComponent.generated.h"

class UPerchTag;
class AAIController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UPerchComponent : public UPrimitiveComponent, public ISmartObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UPerchTag* PerchTag;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    float SearchHeight;
    
    UPROPERTY(EditAnywhere)
    float UseRadius;
    
    UPROPERTY(EditAnywhere)
    bool bUsageTimeOverride;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UsageTimeOverride;
    
    UPROPERTY(EditAnywhere)
    bool bCooldownTimeOverride;
    
    UPROPERTY(EditAnywhere)
    FGbxParam CooldownTimeOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUserCooldownTimeOverride;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UserCooldownTimeOverride;
    
    UPROPERTY(Transient)
    FSmartObjectUseRequest Claimant;
    
    UPROPERTY(Transient)
    float CooldownTime;
    
    UPROPERTY(Transient)
    TMap<AAIController*, float> CooldownMap;
    
public:
    UPerchComponent();
    
    // Fix for true pure virtual functions not being implemented
};

