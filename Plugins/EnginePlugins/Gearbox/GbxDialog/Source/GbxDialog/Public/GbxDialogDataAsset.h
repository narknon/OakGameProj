#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxDataAsset.h"
#include "GbxDialogDataAsset.generated.h"

UCLASS(Abstract, MinimalAPI)
class UGbxDialogDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FGuid Guid;
    
    UGbxDialogDataAsset();
};

