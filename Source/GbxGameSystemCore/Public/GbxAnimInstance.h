#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RuntimeStateMachineData.h"
#include "GbxAnimTableMapItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxStateManagerRuntime -FallbackName=GbxStateManagerRuntime
#include "GbxAnimInstance.generated.h"

class UGbxSkeletalMeshComponent;
class UGbxAnimStateMachineDefinition;
class UGbxAnimTable;
class UAnimSequence;

UCLASS(NonTransient)
class GBXGAMESYSTEMCORE_API UGbxAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UGbxSkeletalMeshComponent* GbxSkeletalMeshComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxAnimStateMachineDefinition*> AnimStateMachineDefinitions;
    
    UPROPERTY(Transient)
    TArray<FRuntimeStateMachineData> RuntimeStateMachines;
    
    UPROPERTY(Transient)
    TMap<UGbxAnimTable*, FGbxAnimTableMapItem> AnimTableMap;
    
    UPROPERTY()
    FGbxStateManagerRuntime ManagerRuntime;
    
public:
    UPROPERTY(EditAnywhere)
    bool bEarlyBindBoneSetDelegates;
    
    UGbxAnimInstance();
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetAnimTableSequence(UGbxAnimTable* AnimTable) const;
    
    UFUNCTION(BlueprintPure)
    bool CanUseAnimTable(UGbxAnimTable* AnimTable) const;
    
};

