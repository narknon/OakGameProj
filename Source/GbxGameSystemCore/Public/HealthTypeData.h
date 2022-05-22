#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "HealthTypeData.generated.h"

class UPhysicalMaterial;
class UGbxAttributeData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UHealthTypeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor DisplayColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString BarBackgroundFrameName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle BalanceData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* PhysMat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* NoDamagePhysMat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxAttributeData* HealthTypeModifierAttribute;
    
    UHealthTypeData();
};

