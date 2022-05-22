#pragma once
#include "CoreMinimal.h"
#include "GbxDialogDataAsset.h"
#include "ECachedResultLifetime.h"
#include "DialogSelectorFunction.generated.h"

class UDialogSelectorImplementation;
class UDialogParameter;

UCLASS()
class GBXDIALOG_API UDialogSelectorFunction : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UDialogParameter*> Parameters;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bTriggeringCondition;
    
    UPROPERTY(EditAnywhere)
    ECachedResultLifetime CachedResultLifetime;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDialogSelectorImplementation* Implementation;
    
    UDialogSelectorFunction();
};

