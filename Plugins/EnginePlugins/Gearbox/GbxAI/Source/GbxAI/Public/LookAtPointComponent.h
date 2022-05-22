#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "GbxParam.h"
#include "SmartObjectInterface.h"
#include "SmartObjectUseRequest.h"
#include "LookAtPointComponent.generated.h"

class ULookAtPointTag;
class AController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API ULookAtPointComponent : public UPrimitiveComponent, public ISmartObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ULookAtPointTag* LookAtPointTag;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY()
    bool bSearchDataOverride;
    
    UPROPERTY(EditAnywhere)
    float SearchHeightOverride;
    
    UPROPERTY(EditAnywhere)
    float SearchRadiusOverride;
    
    UPROPERTY()
    bool bUsageTimeOverride;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UsageTimeOverride;
    
    UPROPERTY()
    bool bUserCooldownTimeOverride;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UserCooldownTimeOverride;
    
    UPROPERTY(Transient)
    TMap<AController*, float> CooldownMap;
    
    UPROPERTY(Transient)
    TArray<FSmartObjectUseRequest> UserList;
    
public:
    ULookAtPointComponent();
    
    // Fix for true pure virtual functions not being implemented
};

