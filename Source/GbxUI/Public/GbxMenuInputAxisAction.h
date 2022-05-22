#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputAxisBind.h"
#include "GbxMenuInputAxisAction.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxMenuInputAxisAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ActionName;
    
    UPROPERTY(EditAnywhere)
    TArray<FGbxMenuInputAxisBind> Binds;
    
    UPROPERTY(EditAnywhere)
    bool bTreatAsButtonPress;
    
    UPROPERTY(EditAnywhere)
    FName PositiveAxisAction;
    
    UPROPERTY(EditAnywhere)
    FName NegativeAxisAction;
    
    UPROPERTY(EditAnywhere)
    bool bWantsRepeat;
    
    FGbxMenuInputAxisAction();
};

