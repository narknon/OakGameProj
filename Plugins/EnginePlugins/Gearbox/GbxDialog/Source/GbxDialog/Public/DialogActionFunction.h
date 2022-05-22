#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDialogDataAsset.h"
#include "DialogActionFunction.generated.h"

class UDialogParameter;
class UDialogActionBlueprintImplementation;

UCLASS()
class GBXDIALOG_API UDialogActionFunction : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UDialogParameter*> Parameters;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDialogActionBlueprintImplementation> BlueprintImplementation;
    
    UDialogActionFunction();
};

