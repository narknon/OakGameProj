#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAnimStateManager -FallbackName=GbxAnimStateManager
#include "ECoverUserAnimState.h"
#include "GbxAnimStateManager.h"
#include "GbxAnimStateManager_Cover.generated.h"

class UCoverViewData;
class UCoverStyleData;
class UGbxCoverTransitionTable;
class UGbxCharacterAnimInstance;
class UCoverUserComponent;
class UGbxCharacterMovementComponent;
class UAnimSequence;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UGbxAnimStateManager_Cover : public UGbxAnimStateManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ECoverUserAnimState Type;
    
    UPROPERTY(EditAnywhere)
    UCoverStyleData* Style;
    
    UPROPERTY(EditAnywhere)
    TArray<UCoverViewData*> Views;
    
    UPROPERTY(EditAnywhere)
    UGbxCoverTransitionTable* TransitionTable;
    
    UPROPERTY(Export, Transient)
    UCoverUserComponent* CoverUser;
    
    UPROPERTY(Transient)
    UGbxCharacterAnimInstance* GbxCharAnimInstance;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* GbxCharMoveComponent;
    
    UPROPERTY(Transient)
    UAnimSequence* AnimSequence;
    
public:
    UGbxAnimStateManager_Cover();
    UFUNCTION()
    void Owner_PostBeginPlay();
    
};

