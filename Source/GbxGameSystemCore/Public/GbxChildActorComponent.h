#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "GbxChildActorSpawnedSignatureDelegate.h"
#include "GbxChildActorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxChildActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 bAutoSpawnActor: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAutoDestroyActor: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDestroyExistingChildActorOnSpawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDeferChildActorClassUpdate: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bClearChildActorReferenceToMeWhenChildActorIsDetached: 1;
    
public:
    UPROPERTY(BlueprintAssignable)
    FGbxChildActorSpawnedSignature OnChildActorSpawned;
    
    UGbxChildActorComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnChildActor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DespawnChildActor();
    
};

