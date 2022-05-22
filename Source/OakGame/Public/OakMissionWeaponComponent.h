#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "OakMissionWeaponComponent.generated.h"

class UMission;
class UMissionObjective;

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakMissionWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated, Transient)
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY(Replicated, Transient)
    TArray<UMissionObjective*> Objectives;
    
    UOakMissionWeaponComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

