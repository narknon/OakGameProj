#pragma once
#include "CoreMinimal.h"
#include "GbxAnimStateManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAnimStateManager -FallbackName=GbxAnimStateManager
#include "GbxAnimStateManager_RootMotion.generated.h"

class UGbxCharacterMovementComponent;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxAnimStateManager_RootMotion : public UGbxAnimStateManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* GbxCharMoveComponent;
    
public:
    UGbxAnimStateManager_RootMotion();
};

