#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSTestingPawn.h"
#include "GbxEqsTestingPawn.generated.h"

class UDamageComponent;
class UGbxCharacterMovementComponent;
class UTargetableComponent;
class UDamageCauserComponent;
class UGameplayTagContainerComponent;

UCLASS()
class GBXAI_API AGbxEqsTestingPawn : public AEQSTestingPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxCharacterMovementComponent* GbxCharacterMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTargetableComponent* TargetableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageCauserComponent* DamageCauserComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGameplayTagContainerComponent* GameplayTagContainerComponent;
    
    UPROPERTY(Transient)
    float BaseAimHeight;
    
    UPROPERTY(Transient)
    float AimHeightFromGround;
    
    AGbxEqsTestingPawn();
};

