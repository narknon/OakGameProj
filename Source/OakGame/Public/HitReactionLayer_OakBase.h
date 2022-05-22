#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitReactionLayer.h"
#include "HitReactionLayer_OakBase.generated.h"

class UHitReactionTag;
class UOakDamageSource;
class UDataTable;

UCLASS(Abstract, Const)
class UHitReactionLayer_OakBase : public UHitReactionLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float LaunchChanceScale;
    
    UPROPERTY(EditAnywhere)
    float StaggerChanceScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakDamageSource> ForceOnlyDamageSource;
    
    UPROPERTY(EditAnywhere)
    UDataTable* MassTable;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* FlinchTag;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* StaggerTag;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* LaunchTag;
    
public:
    UHitReactionLayer_OakBase();
};

