#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTaskOwnerInterface.h"
#include "UObject/NoExportTypes.h"
#include "EGbxActionPriority.h"
#include "EGbxActionEndState.h"
#include "GbxAction.generated.h"

class AActor;
class UScriptStruct;

UCLASS(Blueprintable)
class GBXGAMESYSTEMCORE_API UGbxAction : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bCanUseCDO;
    
public:
    UPROPERTY(EditAnywhere)
    FName ActionSlotName;
    
    UPROPERTY(EditAnywhere)
    EGbxActionPriority ActionPriority;
    
protected:
    UPROPERTY()
    UScriptStruct* InstanceDataType;
    
public:
    UGbxAction();
    UFUNCTION(BlueprintImplementableEvent)
    void OnServerEnd(EGbxActionEndState ActionEndState, AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnServerBegin(AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnd(EGbxActionEndState ActionEndState, AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBegin(AActor* Actor);
    
private:
    UFUNCTION(BlueprintPure)
    bool K2_GetVectorRegisterValue(const FName InName, FVector& OutVector) const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    bool K2_GetObjectRegisterValue(const FName InName, UObject*& OutObject) const;
    
    UFUNCTION(BlueprintPure)
    bool K2_GetNameRegisterValue(const FName InName, FName& OutName) const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetMaxCurrentTime() const;
    
    UFUNCTION(BlueprintPure)
    bool K2_GetIntRegisterValue(const FName InName, int32& OutInt) const;
    
    UFUNCTION(BlueprintPure)
    bool K2_GetFloatRegisterValue(const FName InName, float& OutFloat) const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetCurrentTime() const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetCurrentNormalizedTime() const;
    
    UFUNCTION(BlueprintPure)
    AActor* K2_GetActor() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

