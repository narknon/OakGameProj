#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "BeastmasterStandInActionSkillData.generated.h"

class UGbxAction;
class UOakActionAbility;
class AStandInAuxiliaryActor;

USTRUCT(BlueprintType)
struct FBeastmasterStandInActionSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UOakActionAbility> ActionSkillClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStandInAuxiliaryActor> CustomActor;
    
    UPROPERTY(EditAnywhere)
    FVector CustomActorTranslationOffset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> CustomCE;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> SkillAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> PetAnimation;
    
    UPROPERTY(EditAnywhere)
    float PetAnimationDelay;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve PetScaleCurve;
    
    OAKGAME_API FBeastmasterStandInActionSkillData();
};

