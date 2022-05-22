#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ELookAtPointType.h"
#include "GameplayTagContainer.h"
#include "EFacingChannel.h"
#include "GbxParam.h"
#include "LookAtPointTag.generated.h"

class UGbxCondition;

UCLASS()
class ULookAtPointTag : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ELookAtPointType LookAtPointType;
    
    UPROPERTY(EditAnywhere)
    EFacingChannel FacingStyle;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionType;
    
    UPROPERTY(EditAnywhere)
    float SearchHeight;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UseChance;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* UseCondition;
    
    UPROPERTY(EditAnywhere)
    bool bGetInCloser;
    
    UPROPERTY(EditAnywhere)
    float UseRadius;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UsageTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UserCooldownTime;
    
    UPROPERTY(EditAnywhere)
    bool bMaxUsers;
    
    UPROPERTY(EditAnywhere)
    int32 MaxUsers;
    
    ULookAtPointTag();
};

