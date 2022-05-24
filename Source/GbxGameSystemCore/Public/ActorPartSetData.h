#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "EActorPartReplacementMode.h"
#include "UObject/NoExportTypes.h"
#include "ActorPartListData.h"
#include "ActorPartSetData.generated.h"

class UActorPartData;
class UEnum;

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UActorPartSetData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UActorPartData> PartDataClass;
    
    UPROPERTY(VisibleAnywhere)
    UEnum* PartTypeEnum;
    
    UPROPERTY(EditInstanceOnly)
    EActorPartReplacementMode ActorPartReplacementMode;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FActorPartListData> ActorPartLists;
    
    UPROPERTY(EditFixedSize, EditInstanceOnly)
    TArray<FActorPartListData> OldActorPartLists;
    
    UPROPERTY()
    FGuid Guid;
    
public:
    UActorPartSetData();
protected:
    UFUNCTION()
    void EnumeratePartListForPartType(uint8 PartType, TArray<UActorPartData*>& OutPartList) const;
    
};

