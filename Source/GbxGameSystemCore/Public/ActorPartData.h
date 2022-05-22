#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MultiSelectionGestaltPartNameData.h"
#include "AttributeInitializationData.h"
#include "ActorPartData.generated.h"

class UEnum;
class UGestaltData;
class UActorPartData;

UCLASS(Abstract, BlueprintType)
class GBXGAMESYSTEMCORE_API UActorPartData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnum* PartTypeEnum;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    uint8 PartType;
    
    UPROPERTY(EditDefaultsOnly)
    UGestaltData* GestaltData;
    
    UPROPERTY(EditInstanceOnly)
    FName GestaltMeshPartName;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FName> AdditionalGestaltMeshPartNames;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FMultiSelectionGestaltPartNameData> MultiSelectionGestaltPartNames;
    
    UPROPERTY(EditInstanceOnly)
    FAttributeInitializationData MinGameStage;
    
    UPROPERTY(EditInstanceOnly)
    FAttributeInitializationData MaxGameStage;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UActorPartData*> Dependencies;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UActorPartData*> Excluders;
    
public:
    UActorPartData();
private:
    UFUNCTION()
    void EnumeratePossibleExcluders(TArray<UActorPartData*>& OutPartList) const;
    
    UFUNCTION()
    void EnumeratePossibleDependencies(TArray<UActorPartData*>& OutPartList) const;
    
    UFUNCTION()
    void EnumerateOtherParts(TArray<UActorPartData*>& OutPartList) const;
    
    UFUNCTION()
    void EnumerateGestaltMeshPartNames(TArray<FName>& OutPartNameList) const;
    
};

