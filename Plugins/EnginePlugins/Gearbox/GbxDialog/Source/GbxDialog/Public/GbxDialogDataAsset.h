#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "GbxDialogDataAsset.generated.h"

UCLASS(Abstract, MinimalAPI)
class UGbxDialogDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FGuid Guid;
    
    UGbxDialogDataAsset();
};

