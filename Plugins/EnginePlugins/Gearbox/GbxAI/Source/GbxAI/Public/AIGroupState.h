#pragma once
#include "CoreMinimal.h"
#include "AICommunicationManager.h"
#include "AITicketManager.h"
#include "UObject/Object.h"
#include "TargetPersistentNotes.h"
#include "SpawnerStateInterface.h"
#include "GbxThreatSystemInterface.h"
#include "AIPlanManager.h"
#include "AIGroupState.generated.h"

class USpawnerLinkComponent;
class AActor;

UCLASS()
class GBXAI_API UAIGroupState : public UObject, public ISpawnerStateInterface, public IGbxThreatSystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, VisibleAnywhere)
    USpawnerLinkComponent* LinkComponent;
    
    UPROPERTY(VisibleAnywhere)
    FAITicketManager TicketManager;
    
    UPROPERTY(VisibleAnywhere)
    FAICommunicationManager CommunicationManager;
    
    UPROPERTY(VisibleAnywhere)
    FAIPlanManager PlanManager;
    
    UPROPERTY(Transient)
    TArray<FTargetPersistentNotes> TargetPersistentNotes;
    
public:
    UAIGroupState();
private:
    UFUNCTION()
    void OnThreatActorDied(AActor* DamageReceiver, AActor* DamageCauser);
    
    
    // Fix for true pure virtual functions not being implemented
};

