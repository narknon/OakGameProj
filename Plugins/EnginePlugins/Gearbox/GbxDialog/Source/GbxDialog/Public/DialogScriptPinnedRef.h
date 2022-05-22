#pragma once
#include "CoreMinimal.h"
#include "DialogScriptPinnedRef.generated.h"

class UDialogBlackboard;
class UDialogScriptData;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogScriptPinnedRef {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDialogBlackboard> Blackboard;
    
    UPROPERTY(Transient)
    UDialogScriptData* Script;
    
    FDialogScriptPinnedRef();
};

