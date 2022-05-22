#pragma once
#include "CoreMinimal.h"
#include "DialogConversation.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogConversation {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ConversationID;
    
    UPROPERTY()
    TWeakObjectPtr<UWorld> ConversationWorld;
    
    FDialogConversation();
};

