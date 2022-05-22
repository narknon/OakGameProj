#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "PlayerItemDisplayInfo.h"
#include "CrazyEarlAnointmentReroll.generated.h"

class AActor;
class AOakPlayerController;

UCLASS()
class ACrazyEarlAnointmentReroll : public AAdvancedInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AOakPlayerController* ItemPreviewPlayer;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ItemPreviewActor)
    AActor* SourceItemActor;
    
    UPROPERTY(Transient)
    AActor* ItemPreviewActor;
    
private:
    UPROPERTY()
    TArray<FPlayerItemDisplayInfo> PlayerDisplayInfo;
    
public:
    ACrazyEarlAnointmentReroll();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnReRolledInventorySourceSet(AOakPlayerController* ReRolledOwner, AActor* ReRolledInventoryActor);
    
    UFUNCTION()
    void OnReRolledInventoryActorReady(AOakPlayerController* ReRolledOwner, AActor* ReRolledInventoryActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRerolled(AActor* RerollItem);
    
private:
    UFUNCTION()
    void OnRep_ItemPreviewActor();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitMenu();
    
};

