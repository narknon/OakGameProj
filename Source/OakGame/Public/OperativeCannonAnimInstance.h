#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "OperativeCannonAnimInstance.generated.h"

class AGbxCharacter;

UCLASS(NonTransient)
class OAKGAME_API UOperativeCannonAnimInstance : public UGbxAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AGbxCharacter* GbxCharacterOwner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Pitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Yaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector AimFacingLocation;
    
    UOperativeCannonAnimInstance();
};

