#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAnimStateManager -FallbackName=GbxAnimStateManager
#include "AnimActionDef.h"
#include "ENavAnimState.h"
#include "GbxAnimStateManager.h"
#include "GbxAnimStateManager_AINav.generated.h"

class UGbxNavAnimTable;
class UBlendSpaceBase;
class UGbxCharacterAnimInstance;
class UGbxCharacterMovementComponent;

UCLASS(CollapseCategories, EditInlineNew)
class GBXNAV_API UGbxAnimStateManager_AINav : public UGbxAnimStateManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ENavAnimState Type;
    
    UPROPERTY(EditAnywhere)
    UGbxNavAnimTable* AnimTable;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef BlendSpaceRef;
    
    UPROPERTY(Transient)
    UGbxCharacterAnimInstance* GbxCharAnimInstance;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* GbxCharMoveComponent;
    
    UPROPERTY(Transient)
    UBlendSpaceBase* ResolvedBlendSpace;
    
    UPROPERTY(Transient)
    float ResolvedBlendSpaceYawMin;
    
    UPROPERTY(Transient)
    float ResolvedBlendSpaceYawMax;
    
    UPROPERTY()
    UBlendSpaceBase* BlendSpace;
    
public:
    UGbxAnimStateManager_AINav();
    UFUNCTION()
    void Owner_PostBeginPlay();
    
};

