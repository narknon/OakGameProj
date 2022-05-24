#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAnimStateManager -FallbackName=GbxAnimStateManager
#include "GbxAnimStateManager_Falling.generated.h"

class UGbxCharacterAnimInstance;
class UGbxCharacterMovementComponent;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxAnimStateManager_Falling : public UGbxAnimStateManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxCharacterAnimInstance* GbxCharAnimInst;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* GbxCharMoveComponent;
    
public:
    UGbxAnimStateManager_Falling();
};

