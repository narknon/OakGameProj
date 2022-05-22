#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbility.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakActionAbility_IronBear.generated.h"

class AOakCharacter_IronBear;
class AActor;

UCLASS()
class UOakActionAbility_IronBear : public UOakActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_IronBear* CurrentIronBear;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIronCubActive;
    
public:
    UOakActionAbility_IronBear();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryToSpawnIronCub();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartSummoningIronCub();
    
private:
    UFUNCTION()
    void OnIronCubDestroyed(AActor* IronCub);
    
    UFUNCTION()
    void OnIronCubDead();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    FRotator GetIronBearSpawnRotation() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetIronBearSpawnLocation() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TSubclassOf<AOakCharacter_IronBear> GetIronBearClass() const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetCrouchLocationOffset() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSpawnIronBearAtLocation(UClass* ActorClass, const FTransform& Transform) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelManualExit();
    
    UFUNCTION(BlueprintCallable)
    void BeginManualExit();
    
};

