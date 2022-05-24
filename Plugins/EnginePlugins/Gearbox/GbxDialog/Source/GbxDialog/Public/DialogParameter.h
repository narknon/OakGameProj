#pragma once
#include "CoreMinimal.h"
#include "GbxDialogDataAsset.h"
#include "DialogParameterType.h"
#include "DialogParameter.generated.h"

class UDialogParameter;

UCLASS()
class GBXDIALOG_API UDialogParameter : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogParameter* DefaultInputParameter;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FDialogParameterType Type;
    
    UPROPERTY(EditAnywhere)
    bool bForceDecisionsToAlwaysRetest;
    
    UDialogParameter();
};

