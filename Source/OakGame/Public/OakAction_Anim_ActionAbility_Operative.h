#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim_ActionAbility.h"
#include "OakAction_Anim_ActionAbility_Operative.generated.h"

class UOperativeCharacterComponent;

UCLASS()
class UOakAction_Anim_ActionAbility_Operative : public UOakAction_Anim_ActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bUsesOperativeDevice;
    
    UPROPERTY(Export, Transient)
    UOperativeCharacterComponent* OperativeComponent;
    
public:
    UOakAction_Anim_ActionAbility_Operative();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetOperativeDeviceVisible(bool bVisible) const;
    
};

