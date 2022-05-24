#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GbxParam.h"
#include "OakNpcGreetingComponent.generated.h"

class UAIPerceptionComponent;
class AActor;
class UGbxDialogComponent;
class UMissionObserverComponent;
class UOakMissionDirectorComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakNpcGreetingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam GreetingDistance;
    
    UPROPERTY(EditAnywhere)
    FGbxParam HelloCooldown;
    
    UPROPERTY(EditAnywhere)
    FGbxParam GoodbyeCooldown;
    
    UPROPERTY(EditAnywhere)
    FGbxParam IdleCooldown;
    
    UPROPERTY(EditAnywhere)
    FGbxParam InUseCooldown;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ForgetActorTime;
    
    UPROPERTY(Export)
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(Export)
    UGbxDialogComponent* DialogComponent;
    
    UPROPERTY(Export)
    UMissionObserverComponent* MissionObserverComponent;
    
    UPROPERTY(Export)
    UOakMissionDirectorComponent* MissionDirectorComponent;
    
    UOakNpcGreetingComponent();
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
    
    UFUNCTION()
    void OnDialogStarted();
    
};

