#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimInstance.h"
#include "OakWeaponAnimInstance.generated.h"

class UAnimSequence;
class AOakWeapon;

UCLASS(NonTransient)
class OAKGAME_API UOakWeaponAnimInstance : public UWeaponAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimSequence*> GripPoses;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakWeapon* OakWeapon;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UAnimSequence* GripPose;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UAnimSequence* ForegripPose;
    
    UOakWeaponAnimInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateGripPoses();
    
};

