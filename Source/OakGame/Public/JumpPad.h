#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObject.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "JumpPad.generated.h"

class AActor;
class UPrimitiveComponent;
class AOakCharacter;
class UOakControlledMove;
class UGbxCondition;
class AHavokUserEdgeActor;

UCLASS()
class AJumpPad : public AInteractiveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPrimitiveComponent* LaunchTouchComponent;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FName LaunchTouchComponentName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakControlledMove> ControlledMoveClass;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* LaunchCondition;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool bLockInstanceLaunchSpeed;
    
    UPROPERTY(EditAnywhere)
    float LaunchSpeed;
    
    UPROPERTY(EditAnywhere)
    float LaunchAngle;
    
    UPROPERTY(EditInstanceOnly)
    bool bLinkDestination;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnUserEdge;
    
    UPROPERTY(NonPIEDuplicateTransient, VisibleInstanceOnly)
    AHavokUserEdgeActor* LinkedUserEdge;
    
public:
    AJumpPad();
    UFUNCTION(BlueprintCallable)
    void SetJumpPadEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunched(AOakCharacter* Character);
    
    UFUNCTION()
    void OnCharacterTouch(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Launch(AOakCharacter* Character);
    
protected:
    UFUNCTION()
    void GetValidAssociatedComponentNames(TArray<FName>& Array) const;
    
};

